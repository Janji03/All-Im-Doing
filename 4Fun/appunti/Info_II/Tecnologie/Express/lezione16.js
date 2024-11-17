/*

express json 
mandare come risposta dal server al client dei dati in json 

json (javascript object notation)= standard di passaggio dati 


*/

const express = require ('express')
const app = express()
const {persone} = require('./persone')

app.get('/', (req,res)=>{
    res.json(persone)
})


app.listen(3000)