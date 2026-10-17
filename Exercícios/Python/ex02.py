print('SUPER CALCULADORA')

numero1 = float(input('Digite um valor real: '))
numero2 = float(input('Digite mais um valor real: '))

print('\n-- MENU --\n1 ) Adição\n2 ) Subtração\n3 ) Multiplicação\n4 ) Divisão')
comando = 0

while comando not in [1, 2, 3, 4]:
    comando = int(input('Digite a operação que será feita entre os valores: '))

print()
if comando == 1:
    print(f'{numero1} + {numero2} = {numero1 + numero2}')
if comando == 2:
    print(f'{numero1} - {numero2} = {numero1 - numero2}')
if comando == 3:
    print(f'{numero1} * {numero2} = {numero1 * numero2}')
if comando == 4:
    if numero2 != 0:
        print(f'{numero1} / {numero2} = {numero1 / numero2:.2f}')
    else:
        print('Impossível dividir por zero')