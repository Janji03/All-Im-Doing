/*

modulo file system

FS sincrono 
FS asincrono




*/

// FS SINCRONO
/*


const {readFileSync, writeFileSync} = require ('fs')

const prova = readFileSync('./prova.txt','utf8');
const ciao = readFileSync('./ciao.txt','utf8');

writeFileSync('./prova.txt' , 'sto scrivendo...', {flag : 'a'}); // il flag dice di appendere il testo nel file e non sovrascrivere

console.log(prova)
console.log(ciao)

writeFileSync('./creofile.txt' ,'file che non esisteva bellaaaa');
console.log(creofile)
*/



//FS ASINCRONO 
// i console.log comincio, finito, passo al prossimo mostrano come quando eseguo il codice è eseguito in modo asincrono 


console.log("comincio");
const {readFile, writeFile} = require('fs')

readFile('./ciao.txt', 'utf8', (error,result)=>{
    if(error){
        console.log(error);
        return
    }
    const prova = result;
    console.log(prova);
    readFile('./prova.txt', 'utf8', (error,result)=>{
        if(error){
            console.log(error);
            return
    }
    const ciao = result;
    console.log(ciao);
    writeFile('./creofile.txt','testing',(error, result)=>{
        if(error){
            console.log(error);
            return
        }
        console.log("finito");
    })
    })

})

console.log("vado al prossimo")