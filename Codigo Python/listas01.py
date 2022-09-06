a = [1, 2, 3, 'comprar alimento',4, 5, ['lista dentro de outra', 99]]
#a lista também conta como um elemento
print(a)
print(type(a))
print(len(a))

print('\n\n\n\n')

b = [1, 2, 3, 4, 5]

c = b[2]
b[3] = 100 #é mutável
print(b)
print(c)

b.sort() #coloca na ordem

print(b)