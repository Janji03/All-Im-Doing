/*

Modulo HTTP 

serve per creare web server (sono sempre online in ascolto)

*/

const http = require('http');

const server = http.createServer((request,response)=>{
    //response.write("Benvunuto sul sito");
    //response.end();
    //console.log(request)
    if(request.url === "/"){
        response.end("benvenuto sul sito");
    }
    if(request.url === "/giangi"){
        response.end("mio profilo")
    }
    response.end(`<h1> errore </h1>
        <p> torna alla <a href = "/"> home </a></p>
        `)
})

server.listen(3000);
