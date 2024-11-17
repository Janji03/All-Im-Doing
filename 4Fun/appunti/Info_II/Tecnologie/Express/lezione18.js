/*

Query String Parameter (URL param)

esempio 
https://www.google.com/search?client=ubuntu-sn&channel=fs&q=bologna+fc

query = dopo il ?query=(parametro con cui vuoi filtrare)
limit = numero massimo di oggetti che vuoi che vengano ritornati

*/


const express = require('express')
const  app = express()
const {persone} = require('./persone')

app.get('/persone/search', (req,res)=>{
    const {query, limit} = req.query
    let personeFiltrate = [...persone]
    //gestire query
    if(query){
        personeFiltrate = personeFiltrate.filter((persona)=>{
            return persona.nome.startsWith(query)
        })
    }
    //gestire limite
    if(limit){
        personeFiltrate = personeFiltrate.slice(0,Number(limit))
    }
    //gestire ricerca che non trova niente 
    if(personeFiltrate.length < 1){
        return res.status(200).json({code: 200, data: []})
    }

    res.status(200).json(personeFiltrate)

})




app.listen(3000)