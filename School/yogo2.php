<?php //Pembuka Kode (Alvin Saputra Asu XI IPS 22 / 55)
function bubble_Sort($arrayAcak )
{
	do //Lakukan Hal Di Dalam Kurung Kurawal Selama Bool telahDiSwap Bernilai true
	{
		$telahDiSwap = false; //Deklarasi Status Bool
		for( $i = 0, $c = count( $arrayAcak ) - 1; $i < $c; $i++ ) //Loop
		{
			if( $arrayAcak[$i] > $arrayAcak[$i + 1] ) //Jika Kondisi Memenuhi, Lakukan Yang Di Dalam Kurung
			{
				list( $arrayAcak[$i + 1], $arrayAcak[$i] ) = array( $arrayAcak[$i], $arrayAcak[$i + 1] ); //Tukar Urutan 
				$telahDiSwap = true; //Ganti Status Bool
			}
		}
	}
	while( $telahDiSwap ); //Fungsi While
return $arrayAcak; //Kembalikan Nilai Array Baru
}

$arrayYangAkanDiSusun = array(3, 0, 2, 5, -1, 4, 1); //Urutan Array Acak
echo "Array Acak :\n";
echo implode(', ',$arrayYangAkanDiSusun ); //Output Array
echo "\nArray Terurut\n:";
echo implode(', ',bubble_Sort($arrayYangAkanDiSusun)). //Output Array
PHP_EOL; //Kode Penutup
?>
 