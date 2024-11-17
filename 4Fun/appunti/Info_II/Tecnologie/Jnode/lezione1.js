/*

introduzione NodeJS:
usato per runnare codice js ma non collegato al browser 
è un'applicazione che ci permette tramite il Chrome V8 Engine di runnare codice javascript al di fuori del broswer
è single-thread event loop con codice senza blocchi (non-blocking code)
permette di creare applicazioni scalabili 
permette di fare full stack developing usando solo javascript 
parole chiave  : async, promise, callback



il codice funziona come javascript ma non abbbiamo accesso ai web API


*/


const n = 3;

if (n<3){
    console.log("lt 3")
}else if(n == 3){
    console.log("eq")
}else {
    console.log("gt 3")
}

for(i=0 ; i <10; i++){
    console.log(i);
}

console.log(window.scrollY);