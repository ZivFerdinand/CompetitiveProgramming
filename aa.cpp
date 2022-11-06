#include <stdio.h>

int main()
{
    int n = 3;

    int x;
    char s[110];
    while(n--)
    {
        scanf("%d %s", &x, &s);
        getchar();
        printf("%c%c\n", s[x - 1], s[0]);
    }
}
