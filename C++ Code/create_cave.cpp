#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int spasiAwal = 1;
        int jj = pow(2, n);
    for (int i = n; i >= 1; i--)
    {
        int limit = pow(2, i);
        limit--;
        int cnt = 0;
        if(i!=n)
            spasiAwal *= 2;

        for (int j = 1; j < jj;j++)
        {
            if(cnt >= limit)
                break;
           // printf("%d ", j%spasiAwal);
            if(j == 1 && i!=n)
            {
                printf(" ");
                continue;
            }
            if(j%spasiAwal == 0)
            {
                
                printf("*");
                cnt++;
            }
            else
                printf(" ");
            // else if(j<spasiAwal)
            // {
            //     if(spasiAwal%j == 0)
            //         printf("*");
            //     else
            //         printf("x");

            // }
        }
        printf("\n");
    }
}