# Call Of Pojam: Warfare
Progetto programmazione 2022-2023 - Unibo

Gioco platform in grafica ASCII sviluppato su più livelli utilizzando la libreria ncurses.
L'obiettivo del gioco è quello di acquisire il maggior numero di punti procedendo per i livelli o uccidendo varie tipologie di nemici. Durante la partita sarà possibile raccogliere monete in giro per la mappa, le quali saranno utilizzabili per acquistare potenziamenti nel negozio.
Prima di iniziare ogni partita infatti il giocatore accede al negozio e successivamente viene lanciata la partita. La difficoltà iniziale della partita viene scelta in base ai potenziamenti acquistati e aumenta avanzando nei livelli. In particolare, aumentano il numero di nemici, il loro danno e la loro vita.
Quando la vita del giocatore scende a 0, si può scegliere se uscire dal gioco oppure iniziare una nuova partita mantenendo monete e potenziamenti.

## COMANDI
- KEY_LEFT: spostamento a sinistra
- KEY_RIGHT: spostamento a destra
- KEY_UP: salto
- q: sparo a sinistra
- e: sparo a destra
- 1: attiva scudo
- 2: attiva minigun
- 3: attiva super jump
- 4: attiva colpi potenti
- ESC: metti in pausa
- ctrl-c: chiudi terminale

## Per compilare ed eseguire il gioco, spostarsi nella cartella del progetto e scrivere su terminale:

**make run**

## Per resettare i salvattaggi, spostarsi nella cartella del progetto e scrivere su terminale:

**make clean**

## Autori
Lorenzo Casalini, Gianluca Casaburi, Vittorio Zedda

