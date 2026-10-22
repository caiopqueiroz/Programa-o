# ler 10 números inteiros

# sem usar funções:

# maior, menor e suas posições
# média
# total de números pares
# total de números acima da média 

numeros = list()

posicao_maior = 0
posicao_menor = 0

soma = 0

total_pares = 0

total_acima_media = 0

for numero in range(0, 10):

    numeros.append(int(input('Digite um número inteiro: ')))

    if numero == 0:
        
        maior = numeros[numero] 
        menor = numeros[numero]
    else:
        if numeros[numero] > maior:
            
            maior = numeros[numero]
            posicao_maior = numero
        if numeros[numero] < menor:

            menor = numeros[numero]
            posicao_menor = numero

    soma += numeros[numero]

    if numeros[numero] % 2 == 0:

        total_pares += 1 

    if numero == 9:
        
        media = soma / len(numeros)

        for numero in numeros:

            if numero > media:

                total_acima_media += 1

print(f'Maior {maior} na posição {posicao_maior}\nMenor {menor} na posição {posicao_menor}\nMédia {media:.2f}\nTotal de pares {total_pares}\nTotal acima da média {total_acima_media}')


