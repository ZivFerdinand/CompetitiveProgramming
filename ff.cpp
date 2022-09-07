#include<stdio.h>
#include <string.h>
int main()
{
    char s[10010];
    scanf("%[^\n]", &s);

    for (int i = 0; i < strlen(s); i++)
    {
        int a = -1;
        if(s[i]>=97)
            s[i] -= 32;
        if(s[i] == 'I')
            a = 1;
        else if(s[i] == 'R')
            a = 2;
        else if(s[i] == 'E')
            a = 3;
        else if(s[i] == 'A')
            a = 4;
            else if(s[i] == 'S')
            a = 5;
            else if(s[i] == 'G')
            a = 6;
            else if(s[i] == 'T')
            a = 7;
            else if(s[i] == 'B')
            a = 8;
            else if(s[i] == 'P')
            a = 9;
            else if(s[i] == 'O')
            a = 0;   

        //printf("%d\n", a);
        (a == -1) ? printf("%c", s[i]) : printf("%d", a);
        
    }printf("\n");
}