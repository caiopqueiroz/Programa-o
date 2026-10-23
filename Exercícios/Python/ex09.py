# loja possui 8 produtos

# armazenar em 2 vetores -> 1 para os códigos e 1 para as quantidades

# criar um menu emunerado:

# 1 ) consultar pelo código
# 2 ) registrar uma entrada de unidades
# 3 ) saída de unidades
# 4 ) exibir produtos e quantidades
# 5 ) listar produtos com 5 ou menos unidades no estoque 

# impedir saídas impossíveis

# tratar código de produto inexistente 

from random import randint 

codigos = list()

codigo = 0

while len(codigos) < 8:

    codigo = randint(100, 200)

    if codigo not in codigos:

        codigos.append(codigo)

quantidades = list()

for valor in range(0, 8):

    quantidades.append(randint(0, 50))

#print(codigos[0])

# criando o menu

while True:

    print('\n-- MENU --')
    print('1 ) Consultar pelo código\n2 ) Registrar entrada\n3 ) Registrar saída\n4 ) Ver estoque\n5 ) Ver produtos com pouco estoque')
    comando = -1

    while comando not in range(0, 6):
        
        comando = int(input('Digite a opção: '))
        print()

    if comando == 0:

        print('-- FIM --')

        break 

    if comando == 1:

        # consultar pelo código

        codigo = int(input('Digite o código do produto: '))

        contador = 0

        existe = False

        for valor in codigos:

            if codigo == valor:

                existe = True
                
                print(f'Cód {codigo} | Quant. {quantidades[contador]} |')

            contador += 1

        if not existe:

            print('Código inexistente')

    if comando == 2:

        # registrar entrada 

        codigo = int(input('Digite o código do produto: '))
        
        contador = 0

        acrescimo = 0

        existe = False

        for valor in codigos:

            if codigo == valor:

                existe = True

                acrescimo = int(input('Digite a quantidade de entrada: '))

                quantidades[contador] += acrescimo

                print(f'Cód {codigo} | Quant. {quantidades[contador]} |')

            contador += 1

        if not existe:

            print('Código inexistente')

    if comando == 3:

        # registrar saída 

        codigo = int(input("Digite o código do produto: "))

        existe = False

        contador = 0

        venda = 0

        for valor in codigos:

            if valor == codigo:

                existe = True

                venda = int(input("Qual a quantidade retirada? "))

                if (quantidades[contador] - venda) >= 0:
                
                    quantidades[contador] -= venda

                    print(f'Cód {codigo} | Quant. {quantidades[contador]} |')
                else:

                    print('Estoque insuficiente')

            contador += 1

        if not existe:

            print("Código inválido")

    if comando == 4:

        # ver estoque 

        print('Cód ', end='')
        for codigo in codigos:

            print(f'{codigo}\t', end='|')

        print()

        print('Q.  ', end='')
        for valor in quantidades:

            print(f'{valor}\t', end='|')

        print()

    if comando == 5:

        contador = 0

        print('Cód ', end='')
        for codigo in codigos:

            if (quantidades[contador] <= 5):
                
                print(f'{codigo}\t', end='|')

            contador += 1

        print()

        print('Q.  ', end='')
        for valor in quantidades:

            if valor <= 5:
                
                print(f'{valor}\t', end='|')

        print()



#for valor in quantidades:

#    print(valor)