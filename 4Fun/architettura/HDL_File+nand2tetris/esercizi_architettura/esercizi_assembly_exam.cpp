/*
--ESERCIZI ASSEMBLY HACK PER ESAME:

(esercizi presi da esami precedenti)

TEORIA:





1)
Si scriva codice assembly HACK corrispondente al codice C seguente, assumendo che i e j siano interi memorizzati rispettivamente in MEM[0] e in MEM[1].
if (i-3==0) {j=j-1;} else {j=j*3;}

RISPOSTA 1:
@0
D=M
@3
D=D-A
@if_false
D;JNE
@1
M=M-1
@END
0,JMP

(if false)
@3 
D=A
@x
M=D
@1
D=M
@y
M=D
(loop)
@x
D=M
@END
D;JEQ
@y
D=M
@1
M=M+D
@x
M=M-1
@LOOP



(end)
@END
0,JMP


2)
Si immagini di avere un processore pipeline per eseguire le istruzioni dell’assembler
HACK con 4 stati: fetch, lettura dalla memoria, execute, scrittura in memoria. Si descriva l’esecuzione del codice seguente.
@5
M=M+1
@LOOP
0;JMP
@4
D=A
(LOOP)
@2

RISPOSTA 2:



3)
Spiegare perch`e il linguaggio assembly del processore HACK non prevede
l’istruzione M=M+M. Che modifica sarebbe necessaria per supportarla?

RISPOSTA 3:



4)
Si consideri un assembler che include un’istruzione di moltiplicazione tra
interi. E possibile implementare l’istruzione in hardware, oppure non implementarla `
in hardware e richiedere all’assemblatore di tradurre l’istruzione in un’opportuna sequenza di istruzioni macchina 
(ad esempio somme, shift e/o altro) che la implementino.
Discutere vantaggi e svantaggi delle 2 possibilita.

RISPOSTA 4:



5)
Descrivere come viene implementata in assembly l’operazione di chiamata
di procedura (ad esempio l’istruzione call della VM HACK).

RISPOSTA 5:




6)
Scrivere codice assembler HACK che scriva i numeri da 0 a 9 (nell’ordine)
nelle prime 10 locazioni di RAM.

RISPOSTA 6:

@9
D=A
(loop)
@9
D=D-A
@END
D,JGT
@9
D=D+A
A=D
M=D
D=D+1
@LOOP

(end)
@END
0,JMP


7)
Si consideri il seguente codice assembly HACK:
@0
D=M
@i
M=D
(loop)
@i
A=M
M=0
@i
MD=M+1
@10
D=D-A
@loop
D ;JLE
(fine)
@fine
0 ;JMP
Descrivere il funzionamento e l’effetto complessivo del programma



8)
Si scriva codice assembly HACK che metta il valore 10 in tutte le locazioni
da RAM[40] a RAM[50].


9)
Scrivere un programma in assembler HACK che se MEM[0] `e maggiore di
10 mette in MEM[1] il valore 10, altrimenti il valore 5.


@0
D=M
@10
D=D-A
@if false
D,JLE
@10
D=A
@1
M=D
(end)
@END
0,JMP


(if false)
@5
D=A
@1
M=D