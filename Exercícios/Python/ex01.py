numero = int(input('Digite um numero inteiro: '))

if numero != 0:
    if numero > 0:
        print('O número é positivo', end=' ')
    else:
        print('O número é negativo', end=' ')

    if numero % 2 == 0:
        print('e é par')
    else:
        print('e é ímpar')
else: 
    print('O número é nulo')