/*
//ESERCIZI ARCHITETTURA VM + ASSEMBLY
1)
@2
D=A
@5
M=D

2)Si scriva codice assembly HACK che metta in MEM[10] 
il numero di celle di memoria tra MEM[0] e MEM[9] che contengono un valore minore di 5.

@10
M=0
@10
D=M
@x
M=D
(loop)
@x
D=M
@END
D,JLE
@x
D=M
M=M-1
A=D
@5
D=D-A
@LOOP
@10
M=M+1
@LOOP
(END)
@END
0,JMP


3)
Si scriva codice assembly HACK corrispondente al codice C seguente, assumendo che i e j siano interi memorizzati rispettivamente in MEM[0] e in MEM[1].

if (i>0) 
{j=j-1;} else {j=j*2;}

@0
D=M
@IF_FALSE
D ,JLT
@1
M=M-1
(if false)
@1
D=M
M=M+D

4)
Si scriva una funzione per la VM HACK corrispondente al codice C seguente, assumendo che il tipo int sia a 16 bit.

int fun(int a, int b)
{ if (a==b) {return(a+b+4);} else {return(-a);}

pseudo-codice
function fun (a,b)
push a
push b
eq
if go-to end1
push a
neg
return

label end1
push a
push b
add
push 4
add
return

VM
function fun 0
push argument 0
push argument 1
eq
if go-to end1
push argument 1
neg
return

label end1
push argument 0
push argument 1
add
push constant 4
add
return

5)
int f(int i, int j)
{ 
int a=5;
if(i<5) { i=j+2; j=j-1; } 
else
j=j+a-3; 
return(j);
}


function fun (i,j)
push 5
pop a
push i
push 5
gt
if go-to end1
push j
push 2
add
pop i
push j
push 1
sub
pop j
push j
return

label end1 
push j
push a
add
pop j
push j
push 3
sub
pop j
push j
return


function fun 1
push constant 5
pop local 0
push argument 0
push constant 5
gt
if go-to end1
push argument 1
push constant 2
add
pop argument 0
push argument 1
push constant 1
sub
pop argument 1
push argument 1
return 

label  end1
push argument 1
push local 0
add
pop argument 1
push argument 1
push constant 3
sub
pop arguemnt 1
push argument 1
return

*/