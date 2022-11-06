#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int q,n;
    int arr[150] = {};

    int area, peri;
    
    FILE *inFile;
    inFile = fopen("testdata.in", "r");

    fscanf(inFile, "%d", &q);

    for (int i = 1; i <= q;i++)
    {
        area = peri = 0;
        fscanf(inFile, "%d", &n);
        for (int j = 0; j < n;j++)
        {
            fscanf(inFile, "%d", &arr[j]);
            area += (4 * arr[j]);

            // if (!j || j == n - 1)
            // {
            //     peri += arr[j] * 2;
            // }

            if(j >= 1)
            {
                peri += abs(arr[j] - arr[j - 1]) * 2;
            }
        }
        peri += arr[0] * 2;
        peri += arr[n - 1] * 2;
        peri += (n * 4);

        printf("Case #%d: %d %d\n", i, peri, area);
    }
}