#appunti python
#lezione 0.3

#------------------------------Tuple------------------------------------

#collezione di dati non modificabile
tupla=("Gianluca",17,True)
x=("GIANLUCA",) # tupla singola serve la virgola senno è una stringa
print(type(x))
x=tuple(("Giangi",10)) #costrutture
print(x[0]) 

if "Giangi" in x:
    print(True)

#come modificare una tupla:
#si utilizza una lista 

y=list(x)
y.remove(10)
x=tuple(y)
print(x)

#del tupla (rimuove tutto)

citta=("bologna","venezia","roma","pattipaglia")

#unpack di una tupla
(x,y,*z)= citta  #z* è il resto (diventa una lista)
print(x)
print(y)
print(z)

#unione tuple: +

#metodi: count(), index()
a= citta.count("bologna") #conta quante volte compare elemento
print(a)
a=citta.index("roma") #restituisce l'indice dell'elemento
print(a)

#------------------------------------Set----------------------------------------

#collezione dati non ordinata, non indicizzata, non modificabile, no duplicati
x={"janji",10,True}
a=set({"A",22}) #costrutture
print(type(a))
print(x) #stampa gli elementi in ordine casuale

print("janji" in x) #controlla se è presente l'elemento

x.add(120) #aggiunge un elemento
print(x) 

x.update(a) #aggiunge un set ad un altro
print(x)
#rimuovere elementi
x.remove(10)
x.discard(True)
#differenza tra remove e discard: se vuoi rimuovere un elemento non presente
#remove da errore mentre discard no
x.pop() #rimuove un elemento a caso (non essendo ordinati)
x.clear() #mette il set vuoto
#del x cancella il set
x=set((12,1,5,6))
y=set((3,6,7,8))

z = x.union(y) #union crea un set unione
print(z)
x.intersection_update(y) #restituisce solo i duplicati
print(x)
#differenza tra intersection e interscection_update:
#intersection crea un nuovo set mentre inter_update ne aggiorna uno esistente

z=x.symmetric_difference(y) #toglie i valori in comune
print(z)
x.symmetric_difference_update(y)

#---------------------------------Dictionary------------------------------------

#insieme di coppie chiave-valore
# sx: nome della chiave. dx:valore che attribuisco alla chiave
x={ 
    "nome": "Janji",
    "eta": 19
}
print(x)

#accedere agli elementi
print (x["nome"])
print (x.get("nome"))
print(x.keys()) #accede alle chiavi
print(x.values()) #accede ai valori delle chiavi
print(x.items()) #restituisce una tupla con coppie di chiave-valore
print("ciao" in x) #cercare un elemento nella dictionary

#cambiare elementi
x["nome"]= "marco" 
print(x)
x.update({"nome": "Giangi"})

#aggiungere elementi
x["colore"]= "bianco"
print(x)

#rimuovere elementi
x.pop("nome")
x.popitem() #toglie ultimo elemento
#clear, del


for i in x: #posso mettere x.items, x.keys, x.values
    print(x)

#copiare elementi
y=x.copy()
print(y)
z=dict(x)

#dict annidati
persona={
    "nome":"jianji",
    "cognome":"casa",
    "eta": 19,
    "indrizzo":{
        "citta":"Bologna",
        "cap":40033
    }
}

print(persona)
print(persona["indrizzo"]["cap"])
persona["indrizzo"]["cap"]= 00000
print(persona)
