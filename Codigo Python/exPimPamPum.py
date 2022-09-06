a = ['pim pam' if el % 2 == 0 and el %3 == 0
      else 'pim' if el % 2 == 0
      else 'pam' if el % 3 == 0
      else el for el in range (1, 101)]

print(a)