#appunti python
#lezione 0.2

#-----------------------Collezione di Dati--------------------------------

#liste,tuple,set,dictionary
#differenze e proprietà

#lista:ordinata,indicizzata,modificabile e che permette duplicati
lista= ["a","b","c"] 

#tuple: ordinata,immutabile e che permette duplicati
tupla=("a","b","c")

#set: non ordinato, non permette duplicati
set={"a","b","c"}

#dictionary: ordinate, modificabili, non permette duplicati
dictionary={"a":1,"b":2,"c":3}


#--------------------------------Liste--------------------------------------

x=["Milano",17,True]
print(len(x))
y=list((1,18,2023)) #costrutture list
print(type(y))
print(x[0]) #stampa elemento 0
print(x[0:3]) #range da zero a tre non compreso
x[0]="Bologna" #accede a elemento zero e lo cambia
print(x)
x[0:2]=["a","b"] #si puo accedere ad un range della lista
print(x)
x.append("elemento aggiunto") #aggiunge un elemento in fondo alla lista
x.insert(1,"prova") #puoi scegliere la posizione dove inserire il nuovo elemento
y=["a","b"]
x.extend(y) #aggiunge gli elementi di y in fondo a x
print(x)
#rimuovere elementi:
x.remove("Milano") #rimuove elemento selezionato
x.pop() #rimuove ultimo elemento
x.pop(1)#rimuove elemento di indice 1
del x #cancella tutta la lista
x.clear()# restituisce la lista vuota (a differenza di del che la cancella)

#due modi per ciclare sulla lista
for i in x:
    print(i)

for i in range(len(x)):
    print(x[i])

lista=[2,12,70,4,1,5,60]
lista.sort() #ordina la lista
print(lista)
lista.sort(reverse=True) #ordina la lista al contrario
print(lista)

lista1=lista #è come se lista1 puntasse a lista
lista1=lista.copy() #creo una copia della lista
lista1=list(lista)#altro modo per creare una copia

#modi per unire due liste: +,append,extend
x=["a","b","c"]
y=["d","e","f"]
for i in y:
    x.append(i)
print(x)
print(x+y)
x.extend(y)

