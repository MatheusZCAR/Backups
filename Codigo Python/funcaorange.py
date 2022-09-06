for a in range(1, 16, 3):
    print(a)
# comando de contagem, da posição 1 até a 16, mas pulando de 3 em 3
s = 'string muito daora'

for b in s:
    print(b)
#imprime cada letra da string como uma coluna

for ind, el in enumerate(s): #el significa elemento e ind significa indice
    print(el*(ind + 1))