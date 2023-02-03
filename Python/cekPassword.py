password = str(input('Password: '))

if (len(password) >= 5):
    mengandungAngka = False
    mengandungHurufBesar = False
    mengandungHurufKecil = False
    mengandungSimbol = False
    for i in range(len(password)):
        if(password[i].isupper() == True):
            mengandungHurufBesar = True
        if(password[i].islower() == True):
            mengandungHurufKecil = True
        if(password[i].isdigit() == True):
            mengandungAngka = True
        if(password[i] == '~' or password[i] == '!' or password[i] == '@' or password[i] == '#' or password[i] == '$' or password[i] == '%' or password[i] == '^' or password[i] == '&' or password[i] == '*' or password[i] == '>' or password[i] == '<'):
            mengandungSimbol = True

    if(mengandungAngka == True & mengandungHurufBesar == True & mengandungHurufKecil == True & mengandungSimbol == True):
        print('Password valid')
    else:
        print('Password tidak valid')
else:
    print('Password tidak valid')
