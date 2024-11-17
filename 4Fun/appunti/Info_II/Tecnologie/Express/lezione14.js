/*


Introduzione Express
inizializzare npm 
installare pacchetto express
installare dependecies dev nodemon 
creare lo script nodemon (per farlo partire npm run nomescript)
per vedere il sito scrivi sul browser localhost:numerodiporta

mandare file statici:
creare cartella public/static
app.use cartella
creare pagine html

*/ 

const express = require('express')
const app = express() //crea un istanza con tutte le funzioni di express (kinda costruttore)


app.use(express.static('public'))

app.get('/',  (req, res) => {
    res.sendFile('homepage.html', {root: __dirname + "/public"})
  })

app.get('/about',(req,res)=>{
    res.send('<h1> About</h1>')
})

app.get('/contatti',(req,res)=>{
    res.send('<h1>Contatti</h1>')
})


app.all('*',(req,res)=>{
    res.send('<h1> Risorsa non trovata</h1>')
})

app.listen(3000)