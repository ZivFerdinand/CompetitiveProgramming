#include<stdio.h>
#include <string.h>
int main()
{
    int n, q,x;
    scanf("%d %d", &n, &q);

    char s[500];
    scanf("%s", &s);
    
    
    while(q--)
    {
        scanf("%d", &x);
        (s[x] >= 97) ? s[x] -= 32 : s[x] += 32;
    }

    printf("%s\n", s);
}