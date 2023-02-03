import random
sum = 0
aI = []
bI = []
jumlahRuangan = int(input('Jumlah Ruangan : '))
for i in range(1, jumlahRuangan + 1):
  jumlahGembok = int(input('Jumlah Gembok Ruangan ke-' + str(i) + ': '))
  for i in range(jumlahGembok - 1):
    aI.insert(i, random.randint(-100, 100))
    bI.insert(i, random.randint(-100, 100))
    sum = sum + aI[i] * bI[i]
  aI.insert(i + 1, sum*-1)
  bI.insert(i+1, 1)

  print('a_i: [', end='')
  for i in range(jumlahGembok - 1):
    print(aI[i],  ', ', end='')
  print(aI[i], ']\nb_i: [', end='')
  for i in range(jumlahGembok - 1):
    print(bI[i] +  ', ', end='')
  print(bI[i] +  ']')