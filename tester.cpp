#include<cstdio>
using namespace std;
int main(){
 int a, b, keliling, luas;
 printf("Panjang : ");
 scanf("%d", &a);
 printf("Lebar : ");
 scanf("%d", &b);
 keliling = 2*(a+b);
 luas = a*b;
 printf("Keliling = %d\n", keliling);
 printf("Luas = %d\n", luas); 
}
