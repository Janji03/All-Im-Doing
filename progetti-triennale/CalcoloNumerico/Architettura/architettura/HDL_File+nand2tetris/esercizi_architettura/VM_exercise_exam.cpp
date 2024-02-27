/*
ESERCIZI VM

funzione moltiplicazione:

function mul(x,y)
push 0
pop sum
push y
pop j
label loop (etichetta loop)
push j
push 0
eq
if go-to end (se la condizione è falsa vai a end (etichetta))
push somma
push x
add
pop somma
push j
push 1
sub
pop j
go-to loop (salto incodizionato che torna all'etichetta loop)
end
push somma
return somma


function mul 2
push constant 0
pop local 0
push argument 1
pop local 1
label loop
push local 1
push constant 0
eq 
if go-to end 
push local 0
push argument 0
add
pop local 0
push local 1
push constant 1
sub
pop local 1
go to loop
end
push local 0 
return local 0


ESERCIZI PARZIALI 

label LOOP
push constant 6
push constant 8
eq
not
if-goto LOOP
push constant 5



2)
codice C
int f(int x,int y)
{
while(x>0)
{
y+=3;
x-=2;
}
return x;
}

pseudo codice VM:

function f (x,y)
label loop
push x
push 0
lt 
push x
push 0
eq 
or
go to end
push y
push 3
add
pop y
push x
push 2
sub
pop x
go to loop
push x
return 


VM
function f 0
label loop
push argument 0
push constant 0
lt
push argument 0
push constant 0
eq
or
go to end
push argument 1
push constant 3
add
pop argument 1
push arguement 0
push constant 2
sub
pop arguemnt 0
go to loop 
end
push argument 0
return 


3)
push constant 2
pop local 1
push local 1
push constant 5
neg
add
push local 1
add


4)

int fun(int a)
{ 
while (a<15)
 {
    a+=4;
 }
return(-a);
}

pseudo codice:
function f (a)
label loop
push a
push 15
gt
push a
push 
eq
or
if go-to end
push a
push 4
add
pop a
go-to loop
end
push a
neg 
return 


VM:
function f 1
label loop 
push arguemnt 0
push  const 15
gt
push argument 0
push const 15
eq
or
if go-to end
push argument 0
push const 4
add
pop argument 0
go-to loop
end 
push argument 0
neg
return 


5)
push constant 6
push constant 8
eq
if-goto AFTER
push constant 2
goto END
label AFTER
push constant 3
label END
push constant 4
add


6) dati 3 parametri restituisce il massimo
C:
int a,b,c;
if(a>b && a>c)
return a
if(b>c && b>a)
return b
else
return c

pseudo linguaggio:
function f (a,b,c)
push a
push b
gt
push a 
push c
gt
and
if go-to max a
push b
push a
gt
push b
push c
gt
and
if go-to max b
push c
return 
(max a)
push a
return
(max b)
push b
return

VM:
function f 0
push argument 0
push argument 1
gt
push argument 0
push argument 2
gt
and
if go-to (max-a)
push argument 1
push argument 0
gt
push argument 1
push argument 2
gt
and
if go-to max b
push argument 2
return 

label max(a)
push argument 0
return 

label max(b)
push argument 1
return 


*/