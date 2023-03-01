#appunti python 
#lezione 0.0

#-------------Tipi di dati--------------------------
#non si dichiara il tipo della variabile 
#il tipo è definito dal contenuto della variabile
#la variabile può cambiare tipo durante il programma
#questi sono i principali tipi di python
x= 5
print(type(x)) #int
x="ciao"
print(type(x)) #stringa
x=True 
print(type(x)) #bool
x=["a","b","c"]
print(type(x)) #lista 
x=("a","b","c")
print(type(x)) #tupla
x=range(5)
print(type(x)) #range
x={"a","b","c"}
print(type(x)) #set

#-----------------------Casting-----------------------------------
x="5"
y=5
#print(x+y) #errore:cerca di concatenare due stringhe (ma y=int)
#print(y+x) #errore:cerca di sommare due numeri (ma x=string)
print(int(x)+y)
print(x+str(y))
print(float(y)+float(x)) 

#--------------------Stringhe------------------------------------
x="prova"
y='prova'

multi_linea="""stringa
che può andare
a capo""" #triplice apice per creare stringhe multi_riga

print(x[0]) #stampa "p" (ovvero il carattere con indice zero)
print(len(x)) #funzione che calcola la lunghezza della stringa

x="  stringa di prova "
print(x[:3]) #stampa da carattere in posizione 0 a posizione 3 non compresa
print(x[2:]) #stampa da 2 compreso fino alla fine della stringa
print(x[-3]) #parte dal fondo(-1) e stampa posizione -3
print(x[-3:])

#funzioni stringhe
print(x.upper()) #stampa in upper case
print(x.lower()) #stampa in lower case
print(x.strip()) #toglie spazi all'inizio e in fondo
print(x.replace("p","w")) #sostituisce carattere

x="concate"
y="nami"
print(x+y) #concatenazione stringhe

x= "my age is {}"
print(x.format(19)) #prende un valore e lo inserisce al posto delle {}
x="sono nato il {0} peso {1} altezza {2}"
print(x.format(17,70,1.70))

print('ne vuoi dell\'altro?') #escape dei caratteri:
#quando si vuole inserire nella stringa un carattere tipo "" o ' 
#si deve mettere \ prima

