<?php // Ziven Ferdinand XI IPA 2 / 36

beginning: // Membalikkan Arah Jalannya Command

echo "Halo, Bot Pencari Faktor yang Dibuat Ziven disini, Berapa Faktor yang ingin kamu cari? ";
$n = (int)readline(); // Input Angka yang ingin di temukan faktornya

$myArr = array(); // Deklarasi Array
$cnt = 0; // Penghitung Anggota Array

echo "\nFaktor Dari ".$n." Adalah\n"; // Output Kalimat
for($i = 1; $i <= $n ; $i++){ // Output Setiap Faktor dari Bilangan
    if(!($n % $i)){ // Jika habis dibagi maka
          $myArr[$cnt++] = $i; // Masukkan Bilangan Ke Array
    }
}

for($i = 0; $i < $cnt/2; $i++){ // Loop Untuk Output Data Dalam Array
	if($i == $cnt/2 && ($cnt % 2)){ // Bila Anggota Himpunan Berjumlah Ganjil
		echo $myArr[$i]." x ".$myArr[$i]; // Output Angka Sama di Bagian Tengah
	}
	else{
		echo $myArr[$i]." x ".$myArr[$cnt-$i-1]; // Output Angka Awal dan Akhir
	}
	echo "\n";
}

$ask = (string)readline('Apakah Masih Ingin Mencari Faktor Bilangan Lagi? (Y/N) '); // Pertanyaan untuk mengulang program

if($ask == 'Y') // Jika User Input 'Y' maka ulang
    goto beginning;