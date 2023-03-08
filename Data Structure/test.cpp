#include <stdio.h>
void input (int n1[3][3], int n2[3][3])
{
    int i,j;
    printf("Masukkan Matriks Pertama (3x3) :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &n1[i][j]);
        }
    }
    printf("Masukkan Matriks Kedua (3x3) :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &n2[i][j]);
        }
    }
}
void result (int ordo[3][3])
{
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", ordo[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void kali(int n1[3][3], int n2[3][3])
{
    int i, j, hasil[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            hasil[i][j] = (n1[i][0]*n2[0][j])+(n1[i][1]*n2[1][j])+(n1[i][2]*n2[2][j]);
        }
    }
    result(hasil);
}
void jumlah(int n1[3][3], int n2[3][3])
{
    int i,j,tambah[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            tambah[i][j] = n1[i][j]+n2[i][j];
        }
    }
    result(tambah);
}
void transpos (int n1[3][3], int n2[3][3])
{
    int i,j, Tn1[3][3], Tn2[3][3];
    printf("Transpos Matriks Pertama\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            Tn1[i][j] = n1[j][i];
        }
    }
    result(Tn1);
    printf("Transpos Matriks Kedua\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            Tn2[i][j] = n2[j][i];
        }
    }
    result(Tn2);
}
int main()
{
    int n1[3][3], n2[3][3], choice;
    input(n1,n2);
    printf("1. Perkalian Dua Buah Matrix\n2. Penjumlahan Dua Buah Matrix\n3. Transpose Dua Buah Matrix\n4. Keluar\n");
    scanf("%d", &choice);
    if(choice==1)
    {
        kali(n1,n2);
    }
    else if(choice==2)
    {
        jumlah(n1,n2);
    }
    else if(choice==3)
    {
        transpos(n1,n2);
    }
    else if(choice==4)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}