#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int satisfied;
    char inp[500] = {};

    do
    {
        satisfied = 1;
        int cntSemiColon = 0;
        int cntNumber = 0;
        scanf("%[^\n]", inp);
        getchar();

        if(strlen(inp) != 5)
        {
            satisfied = 0;
            continue;
        }
        for (int i = 0; i < strlen(inp);i++)
        {
            if(inp[i] >= '0' && inp[i] <= '9')
                cntNumber++;
            if(inp[i] == ':')
            {
                if(i!=2)
                {
                    satisfied = 0;
                    break;
                }
                cntSemiColon++;
            }
        }

        satisfied = (cntNumber == 4) && (cntSemiColon == 1);

        int hh = 90,
            mm = 90;
        if(satisfied)
        {
            hh = atoi(inp);
            inp[0] = inp[1] = inp[2] = '0';
            mm = atoi(inp);

            satisfied = (hh < 24) && (mm < 60);
        }
    } while (!satisfied);
    
}