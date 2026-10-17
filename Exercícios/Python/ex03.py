numero = int(input('Digite um número inteiro: '))

fim = int(input(f'Vamos mostrar a tabuada do {numero} até o número que digitar a seguir: '))

for valor in range(1, fim + 1):
    print(f'{numero} * {valor} = {numero * valor}')