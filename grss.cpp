#include<stdio.h>

int main()
{
    int a;
    asu:
    printf("asu");

    scanf("%d", &a);
    if(a == 0)
    {
        goto asu;
    }
}