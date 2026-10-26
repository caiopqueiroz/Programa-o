# criar um jogo da velha para dois jogadores humanos

# alternar entre a vez de cada um 

# receber a linha e a coluna da jogada 

# impedir jogadas impossíveis 

# identificar empate ou vitória de um dos jogadores

#for linha in range(0, 3):

#    for coluna in range(0, 2):

#        print('\t|', end='')

#    if (linha != 2):
        
#        print()
#        print('_' * 25)

#    print()

matriz = [['-', '-', '-'], ['-', '-', '-'], ['-', '-', '-']]

def exibir_matriz(matriz):

    print('  0 1 2')

    for linha in range(0, 3):

        print(f'{linha}', end=' ')

        for coluna in range(0, 3):

            print(f'{matriz[linha][coluna]}', end=' ')

        print()

    return matriz

def jogada_x(matriz):

    comando = list()

    for valor in ['linha', 'coluna']:

        comando.append(int(input(f'Valor {valor}: ')))

    for linha in range(0, 3):

        for coluna in range(0, 3):

            if (comando[0] == linha) and (comando[1] == coluna):

                matriz[linha][coluna] = 'X'

        print()

    return matriz

def jogada_o(matriz):

    comando = list()

    for valor in ['linha', 'coluna']:

        comando.append(int(input(f'Valor {valor}: ')))

    for linha in range(0, 3):

        for coluna in range(0, 3):

            if (comando[0] == linha) and (comando[1] == coluna):

                matriz[linha][coluna] = 'O'

        print()

    return matriz

exibir_matriz(matriz)

for jogada in range(0, 9):

    if jogada % 2 == 0:

        print('Jogada do X:')

        jogada_x(matriz)
        exibir_matriz(matriz)
    else:

        print('Jogada do O:')

        jogada_o(matriz)
        exibir_matriz(matriz)