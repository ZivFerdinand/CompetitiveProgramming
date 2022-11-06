#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000010], b[1000010];
    int q;
    scanf("%d", &q);
    getchar();

    while(q--)
    {
        scanf("%s %s", a, b);
        getchar();

        int lA = strlen(a), lB = strlen(b);

        if (lA != lB)
        {
            printf("Not\n");
            continue;
        }

        int f1[30] = {}, f2[30] = {};
        for (int i = 0; i < lA;i++)
        {
            if (a[i] < 97)
                a[i] += 32;
            if (b[i] < 97)
                b[i] += 32;
            
            f1[a[i] - 97]++;
            f2[b[i] - 97]++;
        }

        int count = 0;
        for (int i = 0; i < 26;i++)
        {
            if (f1[i] == f2[i])
            {
                count += f1[i];
            }
        }
        if(count ==lA)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
}