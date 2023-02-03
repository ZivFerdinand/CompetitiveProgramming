steps = int(input('Steps: '))
path = str(input('Path: '))

def hitung_gunung(steps, path):
    altitude = 0
    gunung = 0
    for i in range(steps):
        if path[i] == 'N':
            altitude += 1
        else:
            altitude -= 1
        
        if(altitude == 1) & (path[i] != 'T'):
            gunung += 1
    
    return gunung

def hitung_lembah(steps, path):
    lembah = 0
    altitude = 0
    for i in range(steps):
        if path[i] == 'N':
            altitude += 1
        else:
            altitude -= 1
        
        if(altitude == -1) & (path[i] != 'N'):
            lembah += 1
    return lembah

print(hitung_gunung(steps, path))
print(hitung_lembah(steps, path))