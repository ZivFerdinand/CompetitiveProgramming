#include<stdio.h>
#include <string.h>
int main()
{
    int q,l,r;
    scanf("%d", &q);

    char s[1010];
    for (int i = 1; i <= q;i++)
    {
        scanf("%s", &s);
        getchar();
        
        l = 0;
        r = strlen(s) - 1;

        int isPal = 1;
        while(l<=r)
        {
            if(s[l] != s[r])
            {
                isPal = 0;
                break;
            }

            l++, r--;
        }

        printf("Case #%d: ", i);
        printf("%s", (isPal) ? "Yay, it's a palindrome" : "Nah, it's not a palindrome");
        printf("\n");
    }
}