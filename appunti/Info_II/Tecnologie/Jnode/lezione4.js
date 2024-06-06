/*

moduli built-in 
os = modulo del sistema operativo
path = modulo per i path join (crea percorsi) basename (ritorna il file dentro il percorso) resolve (crea path assoluti)


*/

const os = require('os')

const prova = {
    nome : os.type(),
    release : os.release(),
    memoria : os.totalmem(),
    disponibile : os.freemem(),
}

console.log(os.userInfo())
console.log(os.uptime())
console.log(os.version())
console.log(os.arch())

console.log("prova")
console.log(prova)


const path = require('path')

console.log(path.sep)
const percorsoprova = path.join('/cartella', 'sottocartella','prova.txt');
console.log(percorsoprova)
console.log(path.basename(percorsoprova))
const percorsoAssoluto = path.resolve(__dirname, '/cartella', 'sottocartella','prova.txt')
console.log(percorsoAssoluto);
