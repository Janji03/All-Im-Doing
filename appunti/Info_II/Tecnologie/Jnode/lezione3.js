/* 

Moduli:

modulo = pacchetti = dipendenze = codice incapsulato : interno, built-in, esterno 
interno : posso scrivere codice in altri file e con module.exports lo posso utilizzare nel mio main 

se chiamo una funzione che viene runnata nel modulo e poi importo quel modulo in un altro file ed eseguo quel file, viene eseguita in automatico
la funzione del modulo 


*/

const saluta = require ('./utils')
const nomi = require ("./nomi")
console.log(nomi)
saluta ("Janji")
saluta (nomi.persona2) 