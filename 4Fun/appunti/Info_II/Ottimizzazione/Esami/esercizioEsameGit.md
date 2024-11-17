## ESERCIZIO 1

#### MULTINAZIONALE INFORMATICA AMERICANA

##### PARAMETRI

n = numero di stabilimenti
m = numero direttori
m >= n = numero di curriculum
pj = punteggio assegnato ad al j-esimo candidato
cj = stipendio del j-esimo direttore
as = punteggio assegnato al candidato di amministrazione
k = numero di candidati di amministrazione
ts = costo del s-esimo candidato di amministrazione

##### VARIABILI 
Xij = assunto il candidato j per lo stabilimento i 
Yis = assunto il candidato s di amministrazione per lo stabilimento i

#### FUNZIONE OBBIETTIVO 

min ƩƩ Xij * cj + min ƩƩ Ysi * ts (sommatorie che vanno rispettivamente da 1 a m e da 1 a n)

##### VINCOLI 

m >= n
j ∈ {1,...,m}
k>= n

massimo una mansione per ogni candidato : Ʃ  xij < 1 per ogni i ∈ m
massimo una mansione per ogni amministratore : Ʃ yis < 1 per ogni i ∈ k
un solo candidato per ogni stabilimento : Ʃ  xij = 1 per ogni i ∈ n
un solo amministratore per ogni stabilimento : Ʃ  xij = 1 per ogni i ∈ n
punteggio medio : ( min ƩƩ Xij * cj + min ƩƩ Ysi * ts ) /2n >= r 


