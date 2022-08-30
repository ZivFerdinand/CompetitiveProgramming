#include <stdio.h>
#include <string.h>

int arr[20100];
bool pernah[200100];
int freq[200100];
int isi[20100];
int dataa[20100];

void sortt(int n)
{
    int done = 1;
    while(done)
    {
        done = 0;
        for (int i = 0; i < n;i++)
        {
            for (int j = i + 1; j < n;j++)
            {
                if(dataa[j] < dataa[i])
                {
                    long long x = dataa[i];
                    dataa[i] = dataa[j];
                    dataa[j] = x;
                    done = 1;
                }
            }
        }
    }
}

int main()
{
    int q,n,cnt,cntt;
    int maxxx = 0;
    scanf("%d", &q);

    for (int k = 1; k <= q; k++)
    {
        cnt = cntt = maxxx = 0;
        memset(pernah, 0, sizeof(pernah));
        memset(freq, 0, sizeof(freq));
        scanf("%d", &n);
        for (int i = 0; i < n;i++)
        {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
            if(freq[arr[i]] > maxxx)
                maxxx = freq[arr[i]];

            if(pernah[arr[i]] == 0)
            {
                pernah[arr[i]] = 1;
                isi[cnt++] = arr[i];
            }
        }
        
        memset(pernah, 0, sizeof(pernah));
        
        for (int i = 0; i < cnt;i++)
        {
            if(freq[isi[i]] == maxxx && !pernah[isi[i]])
            {
                pernah[isi[i]] = 1;
                dataa[cntt++] = isi[i];
            }
        }

        sortt(cntt);

        printf("Case #%d: %d\n", k ,maxxx);
        for (int i = 0; i < cntt;i++)
        {
            printf("%d", dataa[i]);
            if(i<cntt-1)
                printf(" ");
        }
        printf("\n");
    }
}
