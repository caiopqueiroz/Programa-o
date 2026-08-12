notas = []
for nota in range(0, 3):
    notas.append(float(input(
        'Digite uma nota: '
    )))
media_notas = sum(notas) / len(notas)
print('A média das notas é: ', media_notas)