#include<stdio.h>
#include<string.h>

char s[100050];
int main()
{
    int q;
    scanf("%d", &q);
    getchar();

    for (int i = 1; i <= q;i++)
    {
        scanf("%s", s);
        int a[200] = {};
        int x = 0;
        for (int j = 0;j<strlen(s);j++)
        {
            if(!a[s[j]])
            {
                a[s[j]]++;
                x++;
            }
        }

        printf("Case #%d: ", i);
        (x % 2) ? printf("Unbreakable\n") : printf("Breakable\n");
    }
}