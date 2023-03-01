#appunti python 
#lezione 0.1

#----------------------Boolean-----------------------------
x=True
y=False
print(5<10) #restituisce un valore booleano
print(bool(1))
#variabili che hanno come valore false:
print(bool(0))
print(bool(None))
print(bool(""))
print(bool({}))
print(bool(()))
print(bool([]))

#-------------------operatori aritmetici---------------------

#+,-,*,/,%,**,// (//=floor division)
# += , -=, *=, /= (operatori di assegnamento)

#metodi
x=min(5,10,25)
x=max(4,5,7,6,80,92)
x=abs(-5)
x=pow(5,2)


#---------------------if condition------------------------------
# come funziona: if: tutto le istruzioni indentate 
#dipendono dalla condizione
#if, elif, else
#if num< x <num si puo scrivere 
#operatori logici: and, or, not

if 10<15<20 or 11==10:
    print("ciao")

#if annidato
if 8%2==0:
    print("numero pari")
    if 8<10:
        print("numero pari minori di 10")

#---------------------------Loop--------------------------------------
#pre condition: while


#tutta la sintassi del while: break, continue,else
cont=0

#questo ciclo stampa (1,2,4,5)
while cont<10:
    cont+=1
    if cont==3: #contiune: se la condizione è vera 
        continue # skippi le istruzioni successive e torni a inizio ciclo
    print(cont)
    if cont==5:
        break  #se la condizione è vera esci dal ciclo

else:
    print("fine") #ovviamente il break skippa anche else finale
    

#pre condition: for
lista_città=["milano","roma","bologna"]

#sintassi for
for i in lista_città:
    print(i)

stringa="ciao"
for i in stringa:
    print(i)

for i in range(6):
    print(i) #scrive da 0 a 5

