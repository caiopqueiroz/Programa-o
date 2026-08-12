from random import randint 


peso = randint(50, 90)
# 1 kg == 1000g
peso_gramas = peso * 1000
print(f'O peso {peso} kg equivale a {peso_gramas} g')