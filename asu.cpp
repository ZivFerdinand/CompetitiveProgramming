#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[50];
    int satisfied = 0;
    int dd, mm, yyyy;
    do{
        satisfied = 1;
        dd = mm = yyyy = -1;
        scanf("%[^\n]", a);
        getchar();
        // 12/12/2022
        // 0123456789

        for (int i = 0; i < strlen(a);i++)
        {
            if((i==2 || i==5) && a[i] != '/')
            {
                satisfied = 0;
                break;
            }
            else if(!isdigit(a[i]) && (i!=2 && i!=5))
            {
                satisfied = 0;
                break;
            }
        }
        if(satisfied)
        {
            dd = mm = yyyy = 0;

            dd = 10*(a[0]-48) + ((a[1]-48));
            mm = 10*(a[3]-48) + ((a[4]-48));
            yyyy = (1000*(a[6]-48)) + (100 * (a[7]-48)) + (10 * (a[8]-48)) + ((a[9]-48));
        }
    } while (satisfied == 0 || strlen(a)!=10 || (dd<1 || dd>31) || (mm<1 || mm>12) || (yyyy<1 || yyyy>9999));
}