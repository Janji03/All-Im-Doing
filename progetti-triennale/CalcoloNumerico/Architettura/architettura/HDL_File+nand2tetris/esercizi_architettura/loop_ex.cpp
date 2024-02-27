/*
esercizio 1
RAM[2]= RAM[0]+RAM[1] (scrivere in ram 2 la somma di ram 0 e 1)
D=0 //inizializzo D a zero 
@0
D=D+M //aggiorno D quando accedo a zero
@1
D=D+M //aggiorno D quando accedo a uno
@2
M=D //metto il risultato in M di 2


esercizio 2
RAM[0..9]=[10, 9, 8,.., 1] (scrivere in RAM zero dieci, in ram uno nove etc...)
@10
M=-1 // RAM[10]=-1 variable for address
@10
D=A
@11
M=D // RAM[11]=10 variable for value
(LOOP) // do
@11
D=M
M=M-1 // D=RAM[11]--
@10
AM=M+1 // A = ++RAM[10]
M=D // RAM[A] = D
@11
D=M
@LOOP
D;JGT // while RAM[11]>0

esercizio 3 
riempire da indirizzo R0 a R1 la memoria con soli 1
@R0
D=M
@R1
D=D-M
@dif=D
@R0
D=M
@
(LOOP)



@LOOP
@dif;JGT


*/