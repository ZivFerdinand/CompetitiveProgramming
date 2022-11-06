#include<stdio.h>

#include <string.h>
int main()
{
    int q;
    scanf("%d", &q);

    char a[10], b[10];
    for (int i = 1; i <= q;i++)
    {
        scanf("%s %s", a, b);

        if (strlen(a) < strlen(b))
        {
            char c[10];
            strcpy(c, b);
            strcpy(b, a);
            strcpy(a, c);
        }

        printf("Case #%d: ", i);
        int j = 0;
        int found = 0;
        for (j = 0; j < strlen(a) - strlen(b);j++)
        {
            if(a[j]!=48)
            {
                printf("%c", a[j]);
                found = 1;
            }
            else if(found)
                printf("%c", a[j]);
        }

        for (int x = 0; x < strlen(b);x++)
        {
            int cc = (a[j] + b[x] - 48 - 48) % 10;
            if(x==strlen(b)-1)
                printf("%d", cc);
            else if(cc)
            {
                printf("%d", cc);
                found = 1;
            }
            else if(!cc && found)
                printf("%d", cc);
            j++;
        }

        printf("\n");
    }
}   