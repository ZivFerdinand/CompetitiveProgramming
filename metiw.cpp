#include <stdio.h>

int main()
{
    FILE* (file) = fopen("testdata.in", "r");
    int kasus;
    int num;
    int arr[150] = {};
    int kel, area, sum, temp;
    char get;

    fscanf(file, "%d", &kasus);
    for (int i = 0; i < kasus; i++) {
        kel = 0, area = 0, sum = 0, temp = 0;
        kel = area = sum = temp = 0;
        fscanf(file, "%d", &num);
        getc(file);

        for (int j = 0; j < num; j++) {
            fscanf(file, "%d", &arr[j]);
            sum += arr[j];
        }
        for (int j = 0; j < num; j++) {
            // if (j != 0) 
            temp = arr[j] - arr[j + 1];
            if (temp <= 0) temp *= -1;
            // printf("%d\n", temp);
            kel += temp;
        }

        kel += (num * 2) + arr[0];
        area = sum * 4;

        printf("Case #%d: %d %d\n", i+1, kel * 2, area);
    }
    return 0;
}