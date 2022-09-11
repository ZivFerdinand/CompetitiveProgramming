#include<stdio.h>
#include<string.h>
int main()
{
    int q;
    scanf("%d", &q);
    getchar();

    char s[1010];

    for (int i = 1; i <= q;i++)
    {
        scanf("%s", s);
        getchar();
        printf("Case #%d: ", i);
        for (int j = strlen(s) - 1; j >= 0;j--)
        {
            if(s[j]>=97)
                s[j] -= 32;
            else
                s[j] += 32;

            printf("%c", s[j]);
        }

        printf("\n");
    }
}