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

from rich import print

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

    while comando[0] not in [0, 1, 2] or comando[1] not in [0, 1, 2]:

        print('[bold red]JOGADA IMPOSSÍVEL. TENTE DE NOVO[bold red]')

        comando.clear()
        
        for valor in ['linha', 'coluna']:

            comando.append(int(input(f'Valor {valor}: ')))

    for linha in range(0, 3):

        for coluna in range(0, 3):

            if (comando[0] == linha) and (comando[1] == coluna):

                if matriz[linha][coluna] == '-':
                    
                    matriz[linha][coluna] = '[bold green]X[bold green]'
                else:

                    print('[bold red]JOGADA IMPOSSÍVEL. TENTE DE NOVO[bold red]')
                    jogada_x(matriz)

        #print()

    return matriz

def jogada_o(matriz):

    comando = list()

    for valor in ['linha', 'coluna']:

        comando.append(int(input(f'Valor {valor}: ')))

    while comando[0] not in [0, 1, 2] or comando[1] not in [0, 1, 2]:

        print('[bold red]JOGADA IMPOSSÍVEL. TENTE DE NOVO[bold red]')
        
        comando.clear()

        for valor in ['linha', 'coluna']:

            comando.append(int(input(f'Valor {valor}: ')))

    for linha in range(0, 3):

        for coluna in range(0, 3):

            if (comando[0] == linha) and (comando[1] == coluna):

                if matriz[linha][coluna] == '-':
                    
                    matriz[linha][coluna] = '[bold purple]O[bold purple]'
                else:

                    print('[bold red]JOGADA IMPOSSÍVEL. TENTE DE NOVO[bold red]')
                    jogada_o(matriz)

        #print()

    return matriz

def verificar_vitoria(matriz):

    vetor = list()

    venceu = False
    vencedor = ''

    for linha in range(0, 3):

        for coluna in range(0, 3):

            vetor.append(matriz[linha][coluna])

        if vetor == ['[bold green]X[bold green]', '[bold green]X[bold green]', '[bold green]X[bold green]']:

            venceu = True
            vencedor = 'X'
        elif vetor == ['[bold purple]O[bold purple]', '[bold purple]O[bold purple]', '[bold purple]O[bold purple]']:

            venceu = True
            vencedor = 'O'

        vetor.clear()

    for coluna in range(0, 3):
    
        for linha in range(0, 3):

            vetor.append(matriz[linha][coluna])

        if vetor == ['[bold green]X[bold green]', '[bold green]X[bold green]', '[bold green]X[bold green]']:

            venceu = True
            vencedor = 'X'
        elif vetor == ['[bold purple]O[bold purple]', '[bold purple]O[bold purple]', '[bold purple]O[bold purple]']:

            venceu = True
            vencedor = 'O'

        vetor.clear()

    for linha in range(0, 3):

        for coluna in range(0, 3):

            if linha == coluna:

                vetor.append(matriz[linha][coluna])

        if linha == 2:

            if vetor == ['[bold green]X[bold green]', '[bold green]X[bold green]', '[bold green]X[bold green]']:
            
                venceu = True
                vencedor = 'X'
            elif vetor == ['[bold purple]O[bold purple]', '[bold purple]O[bold purple]', '[bold purple]O[bold purple]']:
    
                venceu = True
                vencedor = 'O'

            vetor.clear()

    for linha in range(0, 3):
    
        for coluna in range(0, 3):

            if linha + coluna == 2:

                vetor.append(matriz[linha][coluna])

        if linha == 2:

            if vetor == ['[bold green]X[bold green]', '[bold green]X[bold green]', '[bold green]X[bold green]']:
            
                venceu = True
                vencedor = 'X'
            elif vetor == ['[bold purple]O[bold purple]', '[bold purple]O[bold purple]', '[bold purple]O[bold purple]']:
    
                venceu = True
                vencedor = 'O'

            vetor.clear()

    return vencedor

def jogo_da_velha(matriz):

    exibir_matriz(matriz)

    vencedor = ''

    contador = 0

    for jogada in range(0, 9):

        if contador % 2 == 0:

            print('Jogada do X:')

            jogada_x(matriz)
            exibir_matriz(matriz)
        else:

            print('Jogada do O:')

            jogada_o(matriz)
            exibir_matriz(matriz)

        vencedor = verificar_vitoria(matriz)

        if vencedor != '':

            print(f'O jogador {vencedor} venceu! FIM DO JOGO')

            break

        contador += 1

    if contador == 9:

        print('Empate! DEU VELHA')

jogo_da_velha(matriz)