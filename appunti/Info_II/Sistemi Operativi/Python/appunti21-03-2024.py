# tupla con virgola 

# le tuple non si identificano per forza con le parentesi 
# ma con le virgole 

x = 1,2,3
y = 4,5,6

print(x)
print(y)
x,y = y,x
print(x)
print(y)

# Dict

z = {1: 50, 2:'ciao', 3: 3.14}
# Stampare chiavi e valori
for key, value in z.items():
    print(f"Chiave: {key}, Valore: {value}")


    