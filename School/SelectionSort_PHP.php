<?php
function SelectionSort($data)
{
	for($i = 0; $i < count($data)-1; $i++) { // Deklarasi Fungsi  
		$min = $i; // Variabel untuk menyimpan data terkecil
		for($j = $i+1; $j < count($data); $j++) { // Loop untuk mencari angka terkecil dalam array
			if ($data[$j]<$data[$min]) {
				$min = $j;
			}
		}
	    $data = SwapPositions($data, $i, $min); // Tukar isi array
	}
	return $data; // Kembalikan Data Array yang Telah Terurut
}

function SwapPositions($data1, $left, $right) {
	$backup = $data1[$right];
	$data1[$right] = $data1[$left];
	$data1[$left] = $backup; // Proses Pertukaran
 
	return $data1; // Kembalikan Nilai Baru Yang Didapat
}

$arrayAwal = array(); // Inisialisasi Array
$n = (int)readline('Masukkan Banyak Anggota Array: '); // Input Banyak Anggota Array
$arrayAwal = explode(' ', readline()); // Input Anggota Array 

echo "Array Saat Masih Teracak :\n"; // Output Kalimat
echo implode(', ', $arrayAwal ); // Output Isi Array
echo "\nArray Saat Telah Terurut :\n"; // Output Kalimat
echo implode(', ', SelectionSort($arrayAwal)); // Output Isi Array saat fungsi telah dipanggil
?>