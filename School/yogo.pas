procedure bubbleSort(X: list of sortable items)
	n = length(X) //n merupakan banyak anggota array X
	swapped = true //swapped merupakan indikasi apakah dilakukan swap dalam array
	while(swapped)
		swapped = false //ubah swapped ke salah karena dalam satu putaran belum dilakukan swap
		for i=1 to n-1 inclusive do
		//dalam range 1 sampai n-1 lakukan
			if(X[i] < X[i+1]) then
			//jika bilangan ke-i lebih kecil dari bilangan ke-i+1
				swap(x[i],x[i+1]) // tukar bilangan ke-i dan bilangan ke-i+1
				swapped = true //ubah nilai swapped menjadi benar karena telah dilakukan swap
			end if
		end for
	end while
end procedure