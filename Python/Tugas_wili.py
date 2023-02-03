print('Program Data Mahasiswa Praktikum Algoritma dan Pemrograman Angkatan 2022')
namaMahasiswa = []
npmMahasiswa = []
jurusanMahasiswa = []
kelasMahasiswa = []

jumlahData = 0
pilihan = 0

while pilihan != 5:
  print('         Program Data Mahasiswa')
  print('  Praktikum Algoritma dan Pemrograman')
  print('             Angkatan 2022')
  print('----------------------------------------')
  print('               Menu Data')
  print('----------------------------------------')
  print('1. Input Data Baru')
  print('2. Database')
  print('3. Modifikasi Data')
  print('4. Hapus Data')
  print('5. Keluar')

  pilihan = int(input('Pilih menu : '))

  if pilihan == 1:
    print('----------------------------------------')
    print('            Input Data Baru')
    print('----------------------------------------')
    namaMahasiswa.append(str(input('Nama : ')))
    npmMahasiswa.append(str(input('NPM : ')))
    jurusanMahasiswa.append(str(input('Jurusan [Matematika/Statistika/Aktuaria] : ')))
    kelasMahasiswa.append(str(input('Kelas Algoritma dan Pemrograman [A/B/C/D] : ')))
    jumlahData = jumlahData + 1

    print('       Data Berhasil Ditambahkan!')

  elif pilihan == 2:
    print('----------------------------------------')
    print('                Database')
    print('----------------------------------------')

    for i in range(jumlahData):
      print('ID\t: ', i+1)
      print('Nama\t: ', namaMahasiswa[i])
      print('NPM\t: ', npmMahasiswa[i])
      print('Jurusan\t: ', jurusanMahasiswa[i])
      print('Kelas\t: ', kelasMahasiswa[i])
      if(i != jumlahData - 1):
        print('----------------------------------------')

  elif pilihan == 3:
    print('----------------------------------------')
    print('            Modifikasi Data')
    print('----------------------------------------')
    
    idBaru = int(input('Input ID Mahasiswa : '))
    if(idBaru >= 0 & idBaru < jumlahData):
      namaMahasiswa[idBaru] = (str(input('Nama : ')))
      npmMahasiswa[idBaru] = (str(input('NPM : ')))
      jurusanMahasiswa[idBaru] = (str(input('Jurusan [Matematika/Statistika/Aktuaria] : ')))
      kelasMahasiswa[idBaru] = (str(input('Kelas Algoritma dan Pemrograman [A/B/C/D] : '))) 
      print('       Data Berhasil Dimodifikasi!')

  elif pilihan == 4:
    print('----------------------------------------')
    print('               Hapus Data')
    print('----------------------------------------')

    idBaru = int(input('Input ID Mahasiswa : '))
    if(idBaru >= 0 & idBaru < jumlahData):
      for i in range(idBaru, jumlahData - 1):
        namaMahasiswa[i]=namaMahasiswa[i+1]
        npmMahasiswa[i]=npmMahasiswa[i+1]
        jurusanMahasiswa[i]=jurusanMahasiswa[i+1]
        kelasMahasiswa[i]=kelasMahasiswa[i+1]
      jumlahData-=1  
      print('         Data Berhasil Dihapus!')
  else:
    print('            Program Berhenti!')
    break;
  
  str(input('        Tekan enter untuk lanjut...'))