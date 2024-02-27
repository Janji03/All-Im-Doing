/*A-instruction & C-instruction :

es 1:

RAM[300] (nella ram nell indirizzo 300 voglio scrivere D-1)
@300 //accedo all indirizzo 300 (A=300)
M=D-1 //scrivo in M (di 300) D-1

es 2:

IF ((D-1)=0) go to ROM [56] (se D-1 è uguale a 0 salta a indirizzo 56)
    @56 // A=56
    D-1;JEQ  //controlla se D-1 è uguale a 0 jumpa alla 56
      

es 3:
A=A+1 
D=A+1

AD=A+1 //assegno sia ad A che D A+1
    
es 4:
D=19

@19
D=A

es 5:
RAM[53] =171 (nella cella 53 inserire valore 171)
@171
D=A //metto in D l indirizzo 171
@53 //accedo indirizzo 53
M=D // metto in M 53 il valore di D ovvero 171

