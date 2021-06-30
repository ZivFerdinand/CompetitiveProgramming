	<?php

	// Inisialisasi / Deklarasi Array
	$namaBarang = array();
	$hargaBarang = array();
	$ratingBarang = array();
	$jumlahTerjual = array();
	echo "\nMasukkan Jumlah Barang: ";
	$n = (int)readline(); // Input Jumlah Barang Yang Akan Di Simpan
	echo "\n";

	function bubble_Sort($sortAs) // Fungsi BubbleSort Yang Berisi Sebuah Int Untuk Di Pass
	{
		do
		{
			$swappedPositions = false;  // Deklarasi Bool Penanda Menjadi False
			for( $i = 0; $i < $GLOBALS['n'] - 1; $i++ ) // Untuk 0 sampai N-1 (tidak inklusif)
			{
				$check = false; // Bool Untuk Mengganti Urutan Array
				if($sortAs == 1 || $sortAs == 2)
				{
					if( ($GLOBALS['hargaBarang'][$i] < $GLOBALS['hargaBarang'][$i + 1] && $sortAs % 2)
						|| 
					    ($GLOBALS['hargaBarang'][$i] > $GLOBALS['hargaBarang'][$i + 1] && !($sortAs%2))
					   )
					{
						$check = true; // Ganti Bila Diurutkan berdasarkan harga dan Data memang harus diputar
					}
				}
				else if($sortAs == 3 || $sortAs == 4)
				{
					if( ($GLOBALS['ratingBarang'][$i] < $GLOBALS['ratingBarang'][$i + 1] && $sortAs % 2)
						|| 
					    ($GLOBALS['ratingBarang'][$i] > $GLOBALS['ratingBarang'][$i + 1] && !($sortAs%2))
					   )
					{
						$check = true; // Ganti Bila Diurutkan berdasarkan rating dan Data memang harus diputar
					}
				}
				else if($sortAs == 5 || $sortAs == 6)
				{
					if( ($GLOBALS['jumlahTerjual'][$i] < $GLOBALS['jumlahTerjual'][$i + 1] && $sortAs % 2)
						|| 
					    ($GLOBALS['jumlahTerjual'][$i] > $GLOBALS['jumlahTerjual'][$i + 1] && !($sortAs%2))
					   )
					{
						$check = true; // Ganti Bila Diurutkan berdasarkan jumlah penjualan dan Data memang harus diputar
					}
				}

				if($check)
				{
					list( $GLOBALS['hargaBarang'][$i + 1], $GLOBALS['hargaBarang'][$i] ) = array( $GLOBALS['hargaBarang'][$i], $GLOBALS['hargaBarang'][$i + 1] );
					list( $GLOBALS['namaBarang'][$i + 1], $GLOBALS['namaBarang'][$i] ) = array( $GLOBALS['namaBarang'][$i], $GLOBALS['namaBarang'][$i + 1] );
					list( $GLOBALS['ratingBarang'][$i + 1], $GLOBALS['ratingBarang'][$i] ) = array( $GLOBALS['ratingBarang'][$i], $GLOBALS['ratingBarang'][$i + 1] );
					list( $GLOBALS['jumlahTerjual'][$i + 1], $GLOBALS['jumlahTerjual'][$i] ) = array( $GLOBALS['jumlahTerjual'][$i], $GLOBALS['jumlahTerjual'][$i + 1] );
					$swappedPositions = true; 

					// Proses Penukaran Isi Array Berdasarkan variabel SortAs
					// Ganti Status Penukaran menjadi True
				}
			}
		}
		while( $swappedPositions ); 
	}

	echo("Silahkan Masukkan List Barang (Nama, Harga, Rating, dan Jumlah Terjual)\n\n");
	for($i = 0; $i < $n; $i++)
	{
		// Input Data Barang
		$urutan = $i+1;
		echo "Nama Barang ke-$urutan: ";
			$namaBarang[$i] = (string)readline();
		echo "Harga Barang ke-$urutan: ";
			$hargaBarang[$i] = (double)readline();
		echo "Rating Barang ke-$urutan: ";
			$ratingBarang[$i] = (double)readline();
		echo "Jumlah Terjual ke-$urutan: ";
			$jumlahTerjual[$i] = (int)readline();

		echo "\n";
	}

	// Nama Sebagai Keterangan Judul Tabel
	$namaBarang[$n] = "nama barang";
	$hargaBarang[$n] = "harga barang";
	$ratingBarang[$n] = "rating barang";
	$jumlahTerjual[$n] = "jumlah terjual";

// Tempat Mulai Pengulangan Program Saat User Memilih untuk Mengulang
ULANG:
	echo("\nSORTIR BERDASARKAN:\n");
	$pilihanSortir = array(" ", "Harga Tertinggi", "Harga Terendah", "Rating Tertinggi", "Rating Terendah", 
		"Terjual Paling Banyak", "Terjual Paling Sedikit");
	echo("1: $pilihanSortir[1]			2: $pilihanSortir[2]\n3: $pilihanSortir[3]			4: $pilihanSortir[4]\n");
	echo("5: $pilihanSortir[5]		6: $pilihanSortir[6]\n");
	$choice = (int)readline("INPUT ANGKA SORTIR: ");
	$errorInp = false;

	if($choice < 1 && $choice > 6){ // Jika Pilihan Tidak Sesuai, Maka Beri Keterangan Error
		$errorInp = true;
		echo("Syntax Error, Program akan berhenti\n");
	}
	else
		bubble_Sort($choice);

	if(!$errorInp)
	{
		// Proses Pembuatan Tabel Pada Terminal / CMD
		$max = 66;
		$maxNama = $n;
		$maxHarga = $n;
		$maxRating = $n;
		$maxJumlah = $n;
		for($i = 0; $i <= $n; $i++){
			$namaBarangLen = strlen($namaBarang[$i]);
			$hargaBarangLen = strlen($hargaBarang[$i]);
			$ratingBarangLen = strlen($ratingBarang[$i]);
			$jumlahTerjualLen = strlen($jumlahTerjual[$i]);

			if($namaBarangLen > strlen($namaBarang[$maxNama]))
				$maxNama = $i;

			if($hargaBarangLen > strlen($hargaBarang[$maxHarga]))
				$maxHarga = $i;

			if($ratingBarangLen > strlen($ratingBarang[$maxRating]))
				$maxRating = $i;

			if($jumlahTerjualLen > strlen($jumlahTerjual[$maxJumlah]))
				$maxJumlah = $i;
		}
		$max = strlen($namaBarang[$maxNama])+strlen($hargaBarang[$maxHarga])+strlen($ratingBarang[$maxRating])+strlen($jumlahTerjual[$maxJumlah]) + 16;
		echo "\nBERIKUT INI ADALAH SORTIR BERDASARKAN $pilihanSortir[$choice]\n";
		for($i = 0; $i < $n; $i++)
		{
			if($i == 0){
				echo "| $namaBarang[$n]";
				for($k = strlen($namaBarang[$n]); $k < strlen($namaBarang[$maxNama]); $k++)
						echo " ";
					echo " -- ";
				echo "$hargaBarang[$n]";
				for($k = strlen($hargaBarang[$n]); $k < strlen($hargaBarang[$maxHarga]); $k++)
					echo " ";
				echo " -- ";
				echo "$ratingBarang[$n]";
				for($k = strlen($ratingBarang[$n]); $k < strlen($ratingBarang[$maxRating]); $k++)
					echo " ";
				echo " -- ";
				echo "$jumlahTerjual[$n]";
				for($k = strlen($jumlahTerjual[$n]); $k < strlen($jumlahTerjual[$maxJumlah]); $k++)
					echo " ";
				echo " |\n";
				for($j = 0; $j < $max; $j++)
				{
					if($j != $max-1)
						echo "=";
					else
						echo "=\n";
				}

			}

			// Output Data Yang Telah Terurut
			echo "| ";
			echo $namaBarang[$i];
			for($k = strlen($namaBarang[$i]); $k < strlen($namaBarang[$maxNama]); $k++)
				echo " ";
			echo " -- ";

			echo $hargaBarang[$i];
			for($k = strlen($hargaBarang[$i]); $k < strlen($hargaBarang[$maxHarga]); $k++)
				echo " ";
			echo " -- ";

			echo $ratingBarang[$i];
			for($k = strlen($ratingBarang[$i]); $k < strlen($ratingBarang[$maxRating]); $k++)
				echo " ";
			echo " -- ";

			echo $jumlahTerjual[$i];
			for($k = strlen($jumlahTerjual[$i]); $k < strlen($jumlahTerjual[$maxJumlah]); $k++)
				echo " ";
			echo " |\n";

			if($i == $n-1){
				for($j = 0; $j < $max; $j++)
				{
					if($j != $max-1)
						echo "=";
					else
						echo "=\n\n";
				}

			}
			// Penutupan Tabel Awal
		}
	}

	// Pertanyaan Apakah User Hendak Mengulang Penyortiran Program
	echo "APAKAH ANDA INGIN MENYORTIR ULANG?\n";
	echo "1: Ya\n2: Tidak\n";
	$choice = (int)readline("INPUT ANGKA PILIHAN: ");
	if($choice == 1)
		goto ULANG;
	else
		echo "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI ;D";