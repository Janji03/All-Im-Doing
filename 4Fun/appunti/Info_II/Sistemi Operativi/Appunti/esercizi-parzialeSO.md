# ESERCIZI PARZIALE I 

#### ***CONCORRENZA*** 

## ESAME 19/07/2023

##### ESERCIZIO C.1
Scrivere il monitor sv con una sola funzione entry syncvalue che ha la seguente dichiarazione:
procedure entry int syncvalue(int key);
I processi che chiamano la syncvalue si bloccano sempre. Quando il valore del parametro key è diverso da quello della
precedente chiamata il processo prima di bloccarsi riattiva tutti i processi in attesa. Il valore di ritorno è il numero di
processi con lo stesso valore key sbloccati. Per esempio:
P chiama sv.syncvalue(42), si blocca.
Q chiama sv.syncvalue(42), si blocca.
R chiama sv.syncvalue(44) sblocca P e Q poi si blocca. Il valore di ritorno per P e Q è 2.
T chiama sv.syncvalue(46), sblocca R che ritorna 1 e si blocca.
Q chiama sv.syncvalue(46), si blocca.
P chiama sv.syncvalue(46), si blocca
V chiama sv.syncvalue(0), sblocca T, Q e P (valore di ritorno: 3) poi si blocca...

#### MONITOR
per risolvere esercizi sui monitor bisogna individuare la condition che gestisce i wait e i signal. ogni wait deve avere un signal corrispondente e per trovare il risultato sono solitamente operazioni normali o al massimo l'uso di variabili ausiliare


##### ESERCIZIO C.2

Un servizio di message passing universale supporta tutti i modelli di message passing: sincrono, asincrono
e completamente asincrono. Il funzionamento può essere deciso ad ogni spedizione o ricezione. La API prevede due
funzioni:
void usend(bool blocking, msg_t msg, pid_t dest)
msg_t urecv(bool blocking, pid_t sender)
le funzioni sono bloccanti o meno a seconda del valore del parametro blocking.
Dato un servizio di message passing asincrono scrivere un servizio di message passing universale senza fare uso di
processi server;