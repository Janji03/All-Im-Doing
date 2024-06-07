/*

MiddleWare
sono funzioni che vengono eseguite durante una richiesta (tra la richiesta e la risposta )

req => middleware => res
esempio : quando faccio una get posso mettere un middleware che fa cose prima di ritornare la risposta della get 
app.get('/', middlewareProva, (req,res)=>{

middleware(req,res,next)
next serve a non rimanere bloccato nel middleware ma andare next (si puo anche mandare una res volendo)
si puo rendere il middleware un modulo 

app.use(middleware) (rende scalabile l'inserimento del middleware in tutte le richieste e con tutti i route che creiamo)
posso anche specificare le get su cui voglio che operi il middleware 
esempio app.use('/pet', middlware) viene applicato solo alle route con /pet
si possono "caricare" anche piu middleware per i route usando un array
app.use([middleware1, middleware2])
i middleware possono essere : 
custom (fatti da noi)
static (di express)
terze parti (installati)

*/


const express = require('express')
const  app = express()
const middlewareProva = require('./middlewareprova')

app.use('/pet', middlewareProva)


app.get('/', (req,res)=>{
    res.send("Homepage")

})
app.get('/about', (req,res)=>{
    res.send("About")

})
app.get('/pet/miao', (req,res)=>{
    res.send("miaooo")

})
app.get('/pet/bau', (req,res)=>{
    res.send("bauuu")

})




app.listen(3000)