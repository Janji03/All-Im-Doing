/*

Event emitters 

event driven programing (client / server)
gli eventi sono stra usati dai moduli che importiamo 

*/

const EventEmitter = require('events')

const customEmitter = new EventEmitter();

customEmitter.on('messaggio', (nome, anno)=>{ //registra un evento 
    console.log(`ciao sono ${nome} e sono partito nel ${anno}`)
})
customEmitter.on('messaggio', ()=>{ //registra un evento 
    console.log("ciao sono partito")
})

customEmitter.emit('messaggio', 'giangi', 2024); // emette un evento 
