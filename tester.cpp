#include <stdio.h>
#include <string.h>
int main()
{
    int satisfied;
    char temp[5000];

    do{
        satisfied = 1;
        scanf("%[^\n]", temp);
        getchar();

        int length = strlen(temp);

        if(length == 10)
        {
            for (int i = 0; i < length;i++)
            {
                if(i == 2 || i == 5)
                    if(temp[i]!='/')
                        satisfied = 0;
                else
                {
                    if(temp[i] < 48 && temp[i] > '9')
                        satisfied = 0;
                }
                
            }

            int dd = (temp[0] - 48) * 10 + temp[1] - 48;
        }
        else
        {
            satisfied = 0;
        }
        
    } while (!satisfied);

    printf("asu");
}
/*
0123456

*/