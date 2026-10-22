# ler 10 números inteiros e ordenar em ordem crescente 

# ao final, exibir o vetor comum e ao lado o vetor ordenado

numeros = list()

numeros_ordenados  = list()

for numero in range(0, 10):

    numeros.append(int(input('Digite um número inteiro: ')))

copia_numeros = numeros[:]

menor = 0

contador = 0

for contador_principal in range(0, 10):

    for numero in numeros:

        if contador == 0:

            menor = numeros[contador]
        else:
            
            if numeros[contador] < menor:

                menor =  numeros[contador]

        contador += 1

    numeros_ordenados.append(menor)
    numeros.remove(menor)

    contador = 0

print(copia_numeros)
print(numeros_ordenados)