/*


API
GET  (vedere tutte le persone, una persona)
POST  (aggiungere una persona)
PUT  (modificare persone)
DELETE  (eliminare persone)

*/

const express = require('express')
const app = express()
const {persone} = require('./persone')

app.use(express.json())

app.get('/api/persone', (req,res)=>{
    res.status(200).json({data : persone})
})
app.get('/api/persone/:id', (req,res)=>{
    const {id} = req.params
    const persona = persone.find(
    (persona) => persona.id === id 
    )
    res.json(persona)
})

app.post('/api/persone',(req,res)=>{
    console.log(req.body)
    const persona = req.body 
    persone.push(persona)
    res.status(200).json({succes : true, data : persone})
})


app.put('/api/persone/:id',(req,res)=>{
    const {id} = req.params
    const persona = req.body 
    persone[Number(id)-1] = persona 
    res.status(200).json({success: true, data : persone})
})

app.delete('/api/persone:id',(req,res)=>{
    const {id}  = req.params
    const index = persone.findIndex(persona => persona.id === id)
    persone.splice(index,1)
    res.status(200).json({succes: true , data : persone})
})


app.listen(3000)

