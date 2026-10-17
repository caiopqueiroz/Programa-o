numero = 0
total_divisores = 0

while numero <= 0:
    try:
        numero = int(input('Digite um numero inteiro positivo: '))
    except:
        print('INTEIRO!')

for contador in range(numero, 0, -1):

    if numero % contador == 0:
        total_divisores += 1

if total_divisores > 2:
    print(f'{numero} não é primo')
else :
    print(f'{numero} é primo')
    