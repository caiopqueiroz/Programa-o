numero = -1

numeros = list()

print('-- DIGITE 0 PARA ENCERRAR --')

while numero != 0:
    numero = int(input('Digite um número inteiro: '))

    numeros.append(numero)

numeros.pop()

print()

print(len(numeros), end='')
print(' números foram digitados')
if len(numeros) != 0:
    print(f'A soma dos números foi {sum(numeros)}')
    print(f'A média foi {sum(numeros) / len(numeros):.2f}') 
    print(f'Por fim: o maior número foi {max(numeros)} e o menor foi {min(numeros)}')
 