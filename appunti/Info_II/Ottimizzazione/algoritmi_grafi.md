# Flusso Massimo:
dx flusso aggiornato sx grafo residuo  
una volta terminato il grafo residuo l'algoritmo termina  
***valore ottimo*** = somma dei flussi che escono da s che deve essere uguale a quella che entra in t  
***taglio*** = taglio del grafo fatto in modo tale che la somma dei flussi degli archi tagliati sia uguale al valore ottimo




# Costo Minimo 
ci sono due algoritmi: cancellazione cicli negativi e cammini minimi successivi

## Cammini Minimi Successivi

-setup : mettere a zero il flusso degli archi che hanno costo positivo e meno la capacità dell'arco in quelli che hanno costo negativo  

richieste:
valore ottimo = prendo la soluzione ottima (grafo flusso aggiornato finale) e faccio la somma del prodotto di tutti gli archi per il loro costo

## Cicli Negativi

si parte facendo E-K  
una volta terminato il grafo residuo si cercano cicli negativi.  
l'algoritmo termina quando finiscono i cicli


# Accoppiamento 

Cardinalità Massima   
si aggiunge sorgente e pozzo ( s e t )  
si settano tutti gli archi a 1/0  
si inizia a cercare i cammini minimi tra s e t e saturare gli archi   
l'algoritmo termina quando si collegano tutti i nodi   
la soluzione ottima è il grafo con i nodi accoppiati   
il valore ottimo è il numero di nodi accoppiati 


# Goldberg-Tarjan

set up:
-ci sono due parametri in piu: altezza e sblilanciamento nodi 
-altezza sorgente sempre uguale al numero di vertici e deve rimanere sempre invariata 
-altri nodi hanno altezza iniziale = 0
-archi che partono da s vengono subito saturati
-si calcolano gli sbilanciamenti dei nodi (quello che entra meno quello che esce)

algoritmo
-si sposta il flusso con operazioni di push locali (da nodo a nodo)
-la differenza di altezza tra nodo di partenza e arrivo deve essere uguale a 1
-si parte con il nodo con sbilanciamento maggiore
-se tutte le altezze sono zero si aumenta di 1 quella del nodo scelto e si torna al punto sopra 