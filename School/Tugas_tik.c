#include <stdio.h> // library untuk input dan output
#include <math.h> // untuk operasi matematika(akar, pangkat, sin, cos, tan)
#define M_PI 3.14
#define degreesToRadians(angleDegrees) ((angleDegrees) * M_PI / 180.0) // untuk shortcut operasi derajat ke radian
#define radiansToDegrees(angleRadians) ((angleRadians) * 180.0 / M_PI) // untuk shortcut operasi radian ke derajat

long long binaryToDecimal(long long n){ // fungsi yang mengembalikan nilai bilangan bulat (longlong)
    int dec_value = 0; // deklarasi var dec_value sebagai bilangan bulat bernilai 0
    long long base = 1; // deklarasi var base sebagai bilangan bulat bernilai 1
  
    int temp = num; // deklarasi temp sebagai bilangan bulat dan berisi num
    while (temp) { // perulangan selama var temp > 0
        int last_digit = temp % 10;  // deklarasi var last_digit dan berisi nilai temp di mod 10
        temp = temp / 10; // var temp berisi nilai var temp dibagi 2
  
        dec_value += last_digit * base; // var dec_value berisi nilai dec_value ditambah nilai last_digit dikali nilai base
  
        base = base * 2; // var base berisi nilai var base dikali 2
    }
    return dec_value; // mengembalikan nilai var dec_value
} 
int main(){ 
 int choice,choice2,end_choice; // deklarasi var choice, choice2, end_choice sebagai bilangan bulat
 double a,b; // deklarasi var a,b sebagai bilangan desimal
 long long a1,b1; // deklarasi var a1,b1 sebagai bilangan bulat (longlong)
 char rand[100]="--------------------",ops,ops2[100]; // deklarasi var rand,ops,ops2 sebagai char
menu: // label bernama menu
 printf("     KALKULATOR\n%s\n1: Matematika Dasar\n2: Trigonometri\n3: Fitur Tambahan\n",rand); // output kalimat dalam tanda petik
 printf("4: Konversi\n5: Matriks\n"); // output kalimat dalam tanda 
 scanf("%i",&choice); // input/masukkan var choice
 if(choice==1){ // jika input=1, maka masuk ke perintah dalam kurung kurawal
Matematika_Dasar: // label bernama Matematika_Dasar
  system("cls"); // membersihkan layar console
  printf("Mendukung * / - + p(pangkat) m(mod)\nContoh: 2 p 5\n"); // output kata dalam kutip dan \n menandakan baris baru
  scanf("%lf %c %lf",&a,&ops,&b); // input var a,ops,b
  a1=a; b1=b; // mengisi var a1 dengan nilai a dan var b1 dengan nilai b
  printf("= "); // mengeluarkan tanda =
  if(ops=='+') // jika ops adalah tanda tambah
   printf("%.0lf\n",a+b); // maka keluarkan hasil dari a+b disertai baris baru
  if(ops=='-') // jika ops adalah tanda kurang
   printf("%.0lf\n",a-b); // maka keluarkan hasil dari a-b disertai baris baru
  if(ops=='/' || ops==':'){ // jika ops adalah tanda bagi(/) atau (:)
   if(a1==a && b1==b && !(a1%b1)) printf("%.0lf\n",a/b); // maka 
   else       printf("%.2lf\n",a/b);
  }
  if(ops=='*'){ // jika ops adalah tanda kali
   if(a1==a && b1==b)              printf("%.0lf\n",a*b); // jika benar output a*b tanpa angka belakang koma
   else       printf("%.2lf\n",a*b); // jika salah output a*b 2 angka belakang koma
  }
  if(ops=='p'){ // jika ops adalah tanda p(pangkat)
   int x=a1; // deklarasi var x berisi nilai a1
   for(int i=0;i<b1-1;i++){ // perulangan dari 0 hingga b1-2
   	a1*=x; // var a1 diganti dengan nilai x dikali a1
   }
   printf("%ld\n",a1); // output nilai a1
  }
  if(ops=='m') // jika ops adalah tanda m(mod)
   printf("%ld\n",a1%b1); // maka keluarkan hasil dari a1%b1
  
 }
 else if(choice==2){ // juga jika input==2, maka masuk ke perintah dalam kurung kurawal
Trigonometri: // label bernama Trigonometri
  system("cls"); // membersihkan layar console
  printf("Mendukung sin, cos, tan, cot, csc, sec\nContoh: sin 50\n"); // output kata dalam tanda kutip disertai dengan endline
  scanf("%s",&ops2); // input variabel ops2
  scanf("%ld",&a1); // input variabel a1
  if(ops2[0]=='s' && ops2[1]=='i' && ops2[2]=='n') // jika 3 huruf awal adakah sin
  {
   	  double result = sin(degreesToRadians(a1)); // isi dan deklarasi var result dengan sin(degreesToRadians(a1))
      printf("= %f\n", result); // output nilai var result
  }
  else if (ops2[0]=='c' && ops2[1]=='o' && ops2[2]=='s') // jika 3 huruf awal adakah cos
  {
      double result = cos(degreesToRadians(a1)); // isi dan deklarasi var result dengan cos(degreesToRadians(a1))
      printf("= %f\n", result); // output nilai var result
  }
  else if (ops2[0]=='t' && ops2[1]=='a' && ops2[2]=='n') // jika 3 huruf awal adakah tan
  {
      double result = tan(degreesToRadians(a1)); // isi dan deklarasi var result dengan tan(degreesToRadians(a1))
      printf("= %f\n", result); // output nilai var result
  }
  else if(ops2[0]=='c' && ops2[1]=='o' && ops2[2]=='t') // jika 3 huruf awal adakah cot
  {
   	  double result = 1/tan(degreesToRadians(a1)); // isi dan deklarasi var result dengan 1/tan(degreesToRadians(a1))
      printf("= %f\n", result); // output nilai var result
  }
  else if (ops2[0]=='c' && ops2[1]=='s' && ops2[2]=='c') // jika 3 huruf awal adakah csc
  {
      double result = 1/sin(degreesToRadians(a1)); // isi dan deklarasi var result dengan 1/sin(degreesToRadians(a1))
      printf("= %f\n", result); // output nilai var result
  }
  else // jika semua pernyataan di atas salah maka
  {
      double result = 1/cos(degreesToRadians(a1)); // isi dan deklarasi var result dengan 1/cos(degreesToRadians(a1))
      printf("= %f\n", result); // output nilai var result
  }
 }
 else if(choice==3){ // juga jika input==3, maka masuk ke perintah dalam kurung kurawal
Fitur_tmbhn: // label bernama Fitur_tmbhn
  system("cls"); // membersihkan layar console
  printf("Mendukung turunan, faktorial, akar, absolut, log10\nContoh: log10 100\n"); // output kata dalam input disertai dengan endline
  printf("\nSaran Penulisan khusus turunan: \nturunan =3x^2+5x+7\n\nGunakan sama dengan, tanpa spasi\nspasi hanya ada sebelum tanda sama dengan\n"); // output kata dalam kutip disertai dengan endline
  scanf("%s",&ops2); // input var ops2
  scanf("%ld",&a1); // input var a1
  printf("= "); // ouput tanda =
  if(ops2[0]=='l')
   printf("%.2lf",log10(a1)); // keluarkan hasil log10 dengan 2 angka belakang koma
  else if(ops2[0]=='f'){
   int n=a1; // deklarasi var n dan isi dengan a1
   for(int i=0;i<n-1;i++){ // untuk i=0; i lebih kecil dari n-1; i=i+1
    a1*=i+1;  // ganti nilai a1 dengan hasil kali a1 dengan (i+1)
   }
   printf("%ld",a1); // keluarkan hasil a1
  }
  else if(ops2[0]=='a'){
   if(ops2[1]=='k')
    printf("%f\n",sqrt(a1)); // keluarkan hasil akar a1
   else
    printf("%ld\n",abs(a1)); // keluarkan hasil absolut a1
  }
  else if(ops2[0]=='t'){
   char string[100],rand[102],sym; // deklarasi var bertipe char
   int en=0,cont=1; // deklarasi var bertipe bilangan bulat
   scanf("%s",&string); // masukkan huruf/karakter
   int s_len=strlen(string); // deklarasi dan isi var s_len dengan panjang string
   long long x=0,y=0; // deklarasi variabel x dan y sebagai bilangan bulat
   for(int i=1;i<s_len;i++){ // untuk i=1; i lebih kecil dari s_len; i=i+1
    if(i==1){ // jika i==1
     int cnt=0;
     while(string[i]>=48 && string[i]<58 && i<s_len){ // perulangan
      rand[cnt++]=string[i]; // isi char dengan string[i];
      i++; // i=i+1
     }
     x=atoi(rand); // konversi ke angka
     i--; // i=i-1
    }
    if(string[i]==43 || string[i]==45){
     sym=string[i]; // ubah sym dengan string [i];
     en=1; // ganti en dengan nilai 1
     int cnt=0; // deklarasi var cnt sebagai bilangan bulat
     i++; // i= i+1
     while(string[i]>=48 && string[i]<58 && i<s_len){
      rand[cnt++]=string[i]; // ubah sym dengan string [i];
      i++; // i=i+1
     }
     x=atoi(rand); //konversi ke angka
     
    }
    if(string[i]>=97 && string[i]<=123){
     cont=0; // cont bernilai 0
     if(string[i+1]=='^'){
      int cnt=0; // cnt bernilai 0
      i+=2; // i=i+2
      while(string[i]>=48 && string[i]<58 && i<s_len){
       rand[cnt++]=string[i]; // isi rand dengan string [i];
       i++; // i=i+1
      }
      y=atoi(rand); //konversi angka
      if(en) printf(" %c ",sym); // output sym
      if(y-1>1) // jika y-1 lebih kecil daripada 1
       printf("%ldx^%ld ",x*y,y-1); // maka keluarkan 
      else
       printf("%ldx",x*y); // maka keluarkan hasil dari x*y
      
     }
     else{
      if(en) printf(" %c ",sym); // output sym
      printf("%ld ",x); // maka keluarkan x
      break; // menghentikan proses perulangan (for, do-while, while)
     }
     i--; // i=i-1
    }
   }
   if(cont) printf("0\n"); // outp 0 bila statement benar
   else  printf("\n"); // bila tidak hanya enter
  }
 }
 else if(choice==4){ // jika input==4, maka masuk ke perintah di dalam kurung kurawal
Konversi: // membersihkan layar console
  system("cls"); // bersihka layar console
  printf("Mendukung berbagai Konversi\n1: Radian ke Derajat\n2: Sudut ke Derajat\n"); // output kata dalam kutip disertai dengan endline
  printf("3: Desimal ke Biner\n4: Biner ke Desimal\n"); // output kata dalam kutip disertai dengan endline
  scanf("%i",&choice2); // input var choice2
  if(choice2==1){ // jika input==1
   scanf("%ld",&a1); // masukkan var a1
   printf("= %ld",radiansToDegrees(a1)); // keluarkan hasil konversi dari radian ke sudut
  }
  else if(choice2==2){ // namun jika input==2
   scanf("%ld",&a1); // masukkan var a1
   printf("= %ld",degreesToRadians(a1)); // keluarkan hasil komversi dari sudut ke radian
  }
  else if(choice2==3){ // namun jika input==3 (sama dengan)
   scanf("%ld",&a1); // masukkan var a1;
   int i = 0; // deklarasi var i sebagai bilangan bulat
   for(i = 31; i >= 0; i--){ // untuk i=31; i lebih besar atau sama dengan 0; i=i-1;
	   if((a1 & (1 << i)) != 0){ 
          printf("1"); // maka keluarkan angka 1.
       }else{
          printf("0"); // maka keluarkan angka 0.
       } 
   }
  }
  else{
   scanf("%ld",&a1); // input var a1
   printf("= %ld",binaryToDecimal(a1)); // maka keluarkan hasil konversi dari biner ke desimal
  }
 }
 else{ // jika tidak ada opsi lain, msaka masuk ke perintah dalam kurung kurawal
Matriks: // membersihkan layar console
  system("cls");
  printf("Mendukung Perkalian Matriks\n"); // output kata dalam kutip disertai dengan endline
   int n,m,p,z,o;int a[105][105];int b[105][105];int c[105][105];int sum[105][105]; // deklarasi semua var yang disebutkan dengan bilangan bulat
   printf("Masukkan Ukuran Matriks\nContoh: 2 3 4 berarti Matriks 2x3 dan 3x4\n"); // output kata dalam kutip disertai dengan enter
   scanf("%d",&n); // input variabel n
   scanf("%d",&m); // input variabel m
   scanf("%d",&p); // input variabel p

   for(int i=0;i<105;i++){ // untuk variabel i=0; i lebih kecil dari 105; i=i+1
    for(int j=0;j<105;j++){ // untuk variabel j=0; j lebih kecil dari 105; j=j+1
     a[i][j] = b[i][j] = c[i][j] = sum[i][j] = 0; // mengganti nilai semua var yang disebutkan dengan 0
    }
   }
   printf("Masukkan Matrix Pertama\n"); // Output kata di dalam kutip
   for(int i=0;i<n;i++) // untuk variabel i=0; i lebih kecil dari n; i=i+1
    for(int j=0;j<m;j++) // untuk variabel j=0; j lebih kecil dari m; j=j+1
     scanf("%d",&a[i][j]); // input nilai untuk var a[i][j]
   printf("Masukkan Matrix Kedua\n"); // Output kata di dalam kutip
   for(int i=0;i<m;i++){ // untuk i=0; i lebih kecil dari m; i=i+1
    for(int j=0;j<p;j++){ // untuk j=0; j lebih kecil dari p; j=j+1
     scanf("%d",&b[i][j]); // input nilai untuk var b[i][j]
    }
   }
   for(int i=0;i<n;i++) // untuk i=0; i lebih kecil dari n; i=i+1
    for(int j=0;j<p;j++) // untuk j=0; j lebih kecil dari p; j=j+1
     for(int k=0;k<m;k++){ // untuk k=0; k lebih kecil dari m; k=k+1
      c[i][j] = a[i][k] * b[k][j]; // mengisi nilai c[i][j] dengan nilai hasil perkalian a[i][k] dan b[k][j]
      sum[i][j] += c[i][j]; // mengisi nilai sum[i][j] dengan nilai hasil penjumlahan sum[i][j] dan c[i][j]
     }
   for(int i=0;i<n;i++){ // untuk i=0; i lebih kecil dari n; i=i+1
    for(int j=0;j<p;j++){ // untuk j=0; j lebih kecil dari p; j=j+1
     printf("%d",sum[i][j]); // output nilai var sum[i][j]
     if(j<p-1) // jika j lebih kecil dari p-1
      printf(" "); // output spasi
     else if(j==p-1) // namun jika j== p-1
      printf("\n"); // enter
    }
   } 
  }
 printf("\n        MENU\n%s\n1: Menu Utama\n2: Kembali\n3: Tutup\n",rand); // output kata dalam kutip disertai dengan enter
 scanf("%i",&end_choice); // input var end_choice
 if(end_choice==1){ // jika input==1
  system("cls"); // membersihkan layar console
  goto menu; // kembali ke label menu 
 }
 else if(end_choice==2){ // namun jika input==2
  system("cls"); // membersihkan layar console
  if(choice==1)   	 goto Matematika_Dasar; // kembali ke label Matematika_Dasar
  else if(choice==2) goto Trigonometri;		// kembali ke label Trigonometri
  else if(choice==3) goto Fitur_tmbhn;		// kembali ke label Fitur_tmbhn
  else if(choice==4) goto Konversi;			// kembali ke label Konversi
  else    			 goto Matriks;			// kembali ke label Matriks
 }
 else{ // selain itu
  system("cls"); // membersihkan layar console
  printf("Terima Kasih\n"); // output kata dalam kutip
  return 0; // selesaikan program
 }
}
