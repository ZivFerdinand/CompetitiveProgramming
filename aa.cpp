#include <stdio.h>
int main()
{
    int a, b, q;
    scanf("%d", &q);

    for (int i = 1; i <= q;i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %s\n", i, (a > b) ? "Go-Jo" : "Bi-Pay");
    }
}