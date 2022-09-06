a = [el for el in range(1, 6)] #lista dos numerais de 1 a 5

print(a)

b = [el**2 for el in range(1, 6)] #listas dos quadrados dos numerais de 1 a 5

print(b)

c = [el for el in range(1, 31) if el %3 == 0] #lista com os divisores de 3

print(c)

d = [el if el %2 == 0 else 'x' for el in range(1, 31)]

print(d)