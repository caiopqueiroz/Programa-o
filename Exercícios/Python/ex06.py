# ler notas de n alunos 

# n é informado pelo usuário

# para cada aluno: 2 notas -> 1 média

# mostrar: média da turma / maior média de um aluno / menor média de um aluno / total de alunos aprovados / aprovado: nota >= 7

total_alunos = int(input('Digite o número total de alunos: '))

nota_individual = list()
medias = list()
total_aprovados = 0

for alunos in range(0, total_alunos):

    for prova in range(1, 3):
        nota_individual.append(float(input(f'Digite a {prova}º nota do aluno {alunos + 1}: ')))

    medias.append(sum(nota_individual) / len(nota_individual))
    
    if medias[alunos] >= 7:
        total_aprovados += 1

    nota_individual.clear()

print(f'{sum(medias) / len(medias):.2f} foi a média da turma\nA maior média foi {max(medias)} e a menor {min(medias)}\nAlém disso, o total de alunos aprovados foi {total_aprovados}')