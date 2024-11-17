/*

Streams 

flusso costante di dati divisi in chunk (pezzi)

creazione file pesante 
leggere il file senza stream 
leggere il file con stream 


*/

/*
const {writeFileSync} = require('fs')
for (let i = 0; i<10000; i++){
    writeFileSync('./filegrande.txt', `riga numero ${i}\n`,{flag : 'a'})
} 

const {readFilSync, writeFileSync} = require('fs');
const filegrande = readFilSync('./filegrande.txt');

console.log(filegrande);
*/

const {createReadStream, readFileSync, writeFileSync} = require('fs');

const stream = createReadStream('./filegrande.txt');

stream.on('data',(result)=>{
    console.log(result);
})