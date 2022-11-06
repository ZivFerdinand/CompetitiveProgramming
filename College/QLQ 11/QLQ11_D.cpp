#include <stdio.h>

int arr[105] = {0};

int min () {
    int newMin = 2000000005;
    int indeks = 0;
    for (int i = 0; i < 25; i++) {
        if (arr[i] < newMin && arr[i] != -1) {
            newMin = arr[i];
            indeks = i;
        }
    }

    arr[indeks] = -1;

    return newMin;
}

int max () {
    int newMax = 0;
    int indeks = 0;
    for (int i = 0; i < 25; i++) {
        if (arr[i] > newMax && arr[i] != -1) {
            newMax = arr[i];
            indeks = i;
        }
    }

    arr[indeks] = -1;

    return newMax;
}

int main () {
    int ulang;
    scanf ("%d", &ulang);

    for (int i = 0; i < ulang; i++) {
        for (int j = 0; j < 25; j++) {
            scanf ("%d", &arr[j]);
        }
        int a = min() / 2; // a + a
        int e = max() / 2; // e + e

        int b = min() - a; // a + b - a
        int d = max() - e; // d + e - e

        // Eliminasi yang tdk berguna
        min(); // b + a
        min(); // b + b
        
        int c = min() - a; // c + a

        printf ("Case #%d: %d %d %d %d %d\n", i+1, a, b, c, d, e);
        for (int j = 0; j < 25; j++) {
            printf ("%d ", arr[j]);
        }
        printf("\n");
    }


    return 0;
}