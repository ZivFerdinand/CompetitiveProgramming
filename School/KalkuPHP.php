<?php

// ALVIN SAPUTRA XII IPS 2
echo "\nSELAMAT DATANG DI KALKULATOR\n";
echo "Syntax Aritmatika Yang Didukung adalah Tambah, Kurang, Kali, dan Bagi\n";
echo "Faktorial, Fibonacci Ke-n, Pangkat\n";

$memoryValue = 0;
$memoryValueTemp = 0;

function Pertambahan($a, $b)
{
return $a+$b;
}

function Perkurangan($a, $b)
{
return $a-$b;
}

function Perkalian($a, $b)
{
return $a*$b;
}

function Pembagian ($a, $b)
{
return $a/$b;
}

STARTING_POINT:
echo("Aritmatika");

$choice = (int)readline("INPUT PILIHAN: ");

if($choice == 1)
{
	$a = (int)readline("INPUT ANGKA PERTAMA: ");
	$operator = (char)readline("INPUT OPERATOR ARITMATIKA: ");
	$b = (int)readline("INPUT ANGKA KEDUA: ");


	switch ($operator) {
	  case '*':
	    $memoryValueTemp = Perkalian ($a,$b);
	    break;
	  case '/':
	    $memoryValueTemp = Pembagian ($a,$b);
	    break;
	  case '-':
	    $memoryValueTemp = Perkurangan($a,$b);
	    break;
	  case '+':
	    $memoryValueTemp = Pertambahan($a,$b);
	    break;
	  default:
	    echo "Invalid Operator!\n";
	}

	echo $memoryValueTemp;
	echo "\n";
}

