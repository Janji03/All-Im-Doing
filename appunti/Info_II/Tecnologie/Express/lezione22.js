/*

Routing 



*/


const express = require('express')
const app = express()
const personeRouter = require('./routes/persone')
const { persone } = require('./persone')

app.use(express.json())

app.use('/api/persone', personeRouter)


app.listen(3000)
