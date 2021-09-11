<?php
function myCounter ($x, $y)
{
    $penjumlahan = $x + $y;
    $pengurangan = $x - $y;
    $perkalian = $x * $y;
    $pembagian = $x / $y;
    $modulo = $x % $y;
    echo "Penjumlahan = $penjumlahan <br>";
    echo "Pengurangan = $pengurangan <br>";
	echo "Perkalian = $perkalian <br>";
    echo "Pembagian = $pembagian <br>";
    echo "Modulus/Sisa Pembagian = $modulo <br><br>";
}
echo myCounter (70,2);

function myCounter1 ($x, $y, $z, $a)
{
    $pengurangan = $x - $y - $z;
    $pengurangan1 = $x - $y - $z - $a;
    $perkalian = $x * $y * $z;
    $pembagian = $x / $y / $z;
    echo "Pengurangan 3 Angka = $pengurangan <br>";
    echo "Pengurangan 4 Angka = $pengurangan1 <br>";
    echo "Perkalian 3 Angka = $perkalian <br>";
    echo "Pembagian 3 Angka = $pembagian <br><br>";
}
echo myCounter1 (30,2,77,12);

function myCounter2 ($x, $a)
{
    $akar = sqrt($x);
    $penguranganAkar = sqrt($x)-$a;
    $akarPangkatTiga = pow($x,1/3);
    echo "Akar Kuadrat = $akar <br>";
    echo "Akar Kubik = $akarPangkatTiga <br>";
    echo "Pengurangan Akar = $penguranganAkar <br><br>";
}
echo myCounter2 (64,15);

function myCounter3 ($x, $y, $z, $a, $b)
{
    $penjumlahanPengurangan = $x - $y + $z - $a + $b;
    $perkalianPembagian = $x * $y / $z * $a;
    $campuran = $x * $b + $y - $a / $z;
    $campuran1 = ($x * $b) + $y - ($a / $z);
    echo "Penjumlahan dan Pengurangan 5 Angka = $penjumlahanPengurangan <br>";
    echo "Perperkalian dan Pembagian 4 Angka = $perkalianPembagian <br>";
    echo "Operasi Hitung Bilangan Campuran = $campuran <br>";
    echo "Operasi Hitung Bilangan Campuran Menggunakan Kurung = $campuran1 <br><br>";
}
echo myCounter3 (70,8,1,2,4);

function myCounter4 ($x)
{
    $kuadrat = pow($x,2);
    $kubik = pow($x,3);
    $pangkatLima = pow($x,5);
    echo "Bilangan Kuadrat = $kuadrat <br>";
    echo "Bilangan Kubik = $kubik <br>";
    echo "Bilangan Pangkat Lima = $pangkatLima <br><br>";
}
echo myCounter4 (2);

function myCounter5 ($x)
{
    if($x > 1)
        return $x * myCounter5($x - 1);
    else
        return 1;
}

echo "Faktorial = ".myCounter5 (6);
echo "<br><br>";

function myCounter6 ()
{
    $pi = M_PI;
    echo "Nilai Pi = $pi <br>";
}
echo myCounter6 ();