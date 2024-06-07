/*

Postman
è un programma che ti permette di testare senza dover usare l'interfaccia di front-end
e senza usare il browser 
ti permette di testare gli end point del tuo API senza avere un sito da aprire col browser (quindi ti risparmi di dover fare html)


*/

const express = require('express')
const  app = express()
app.use(express.json())

app.get('/', (req,res)=>{
    res.send("Homepage")

})
app.get('/utente', (req,res)=>{
    res.json({nome : "Giangi"})

})
app.post('/', (req,res)=>{
    console.log(req.body)
    res.send("ok post")

})
app.put('/', (req,res)=>{
    res.send("ok put")

})
app.delete('/', (req,res)=>{
    res.send("ok delete")

})

app.listen(3000)