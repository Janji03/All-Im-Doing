# Creazione Divisione Rete 

dato N(300)-A(57)-B(177)-A1(22)-B1(4)-B2(105)

N   > 300  
rete 215.97.18.0/23(classe C)  
maschera 255.255.254.0  
primo host 215.97.18.00000001  
ultimo host 215.97.19.11111110  
router 215.97.19.254  
default gateway = router  
broadcast 215.97.19.255  

dopo N scendo nell'albero e parto dal più grande che c'è in fondo ovvero B2

B2 105
rete 215.97.18.1/25
broadcast 215.97.18.127
router 215.97.18.126
ultimo host 215.97.18.125
primo host 215.97.18.1
default gateway 215.97.18.254 (calcolato dopo aver creato B)

B1 4
rete 215.97.18.128/
primo host 215.97.18.129
broadcast 215.97.18.135
router 215.97.18.134
ultimo host 215.97.18.133
default gateway 215.97.18.254 (calcolato dopo aver creato B)

B 177
rete 215.97.16.0/
primo host 215.98.18.1
broadcast 215.97.18.255
router 215.97.18.254
ultimo host 215.97.18.253
default gateway 215.97.19.254 (router di N)

A1 22
rete 215.97.19.0/27
primo host 215.97.19.1
broadcast 215.97.19.31
router 215.97.19.30
ultimo host 215.97.19.29
default gateway 215.97.19.62

A <57
rete 215.97.19.0/26
primo host 215.97.19.1
broadcast 215.97.19.63
router 215.97.19.62
ultimo host 215.97.19.61
default gateway 215.97.19.254  

# Calcolo tempo accesso alla rete

