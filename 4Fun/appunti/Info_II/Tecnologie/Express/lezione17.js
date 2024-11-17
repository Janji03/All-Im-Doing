/*

route param

mapping per non mandare tutti i dati (si usa la funzione map e si crea una {} con solo gli attribuiti che ci interessano)

come chiedere un oggetto specifico 
ora come faccio se ho n persone e voglio gestirle  tutte come oggetti specifici (chiaramente non posso farlo a mano per ogni utente)
è qui che si usano i route param 

un esempio di route param /prodotti/:idProdotto/recensioni/:idRecensione (lista di tutti i prodotti trovami un prodotto specifico e lista di tutte le recensioni
trovami una recensione specifica )


*/

const express = require('express')
const  app = express()
const {persone} = require('./persone')

app.get('/', (req,res)=>{
    res.send("<h1> Homepage </h1>")
})



//prendo solo gli attribuiti che voglio della persona 
app.get('/persone', (req,res)=>{
    const nuovapersona = persone.map((persona)=>{
        const {nome , cognome, eta} = persona
        return {nome, cognome, eta}
    })
    res.json(nuovapersona)
})


//prendo un solo oggetto (una sola persona) del json persone
app.get('/persone/1', (req,res)=>{
    const persona = persone.find((persona)=> persona.id == '1')
    res.json(persona)
})

//route param 

app.get('/persone/:id',(req, res) =>{
    console.log(req.params)
    const {id} = req.params 
    const persona = persone.find((persona)=> persona.id == id)

    if(!persona){
        return res.status(404).send("persona non trovata ")
    }
    res.json(persona)
})




app.listen(3000)