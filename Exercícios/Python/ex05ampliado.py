# mostrar todos os números primos entre 1 e o limite informado

limite = 0

while limite <= 0:
    limite = int(input('Digite um numero inteiro positivo: '))

for numero in range(1, limite + 1):

    numero_divisores = 0

    for valor in range(numero, 0, -1):

        if numero % valor == 0:
            numero_divisores += 1

    if not numero_divisores > 2:

        print(f'{numero} ', end='')

print('são números primos')

