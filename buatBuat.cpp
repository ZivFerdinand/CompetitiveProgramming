#include<stdio.h>
#include<string.h>
// void swapdata(char nama[][110],int a,int b)
// {
//     char temp[100] = {};
//     strcpy(temp, nama[a]);
//     strcpy(nama[a], nama[b]);
//     strcpy(nama[b], temp);
// }
int partition(char nama[][110],int left,int right)
{
    char pivot[110];
    strcpy(pivot, nama[right]);
    int i = left - 1;
    int j = left;
    while(j<right)
    {
        if(strcmp(pivot,nama[j])>0)
        {
            i++;
            char temp[110];
            strcpy(temp, nama[i]);
            strcpy(nama[i], nama[j]);
            strcpy(nama[j], temp);
            //swapdata(nama, i, j);
        }
        j++;
    }
    strcpy(nama[right], nama[i + 1]);
    strcpy(nama[i + 1], pivot);
    // swapdata(nama,i + 1, right);
    return (i + 1);
}
void quicksort(char nama[][110],int left,int right)
{
    if(left<right)
    {
        return;
    }
    int posisi = partition(nama, left, right);
    quicksort(nama, left, posisi - 1);
    quicksort(nama, posisi + 1, right);
}
int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int x = 0; x < testcase;x++)
    {
        int banyak;
        int pilih;
        scanf("%d %d", &banyak, &pilih);
        char nama[banyak][110];
        for (int y = 0; y < banyak;y++)
        {
            scanf("%s", nama[x]);
        }
        quicksort(nama, 0, banyak - 1);
        // for (int y = 0; y < banyak;y++)
        // {
        //     printf("%s", nama[x]);
        // }
        printf("Case #%d: %s\n", x + 1, nama[pilih - 1]);
    }
}