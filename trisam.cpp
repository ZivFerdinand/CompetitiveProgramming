#include <stdio.h>
#include<string.h>
char left[150][50], right[150][50];



int main()
{
    int n;
    FILE *fd = fopen("testdata.in", "r");

    fscanf(fd, "%d", &n);
        fgetc(fd);
    for (int i = 0; i < n;i++)
    {
        fscanf(fd, "%[^#]#%[^\n]", left[i], right[i]);
        fgetc(fd);
        //printf("%s # %s\n", left[i], right[i]);
    }

    int q;
    fscanf(fd, "%d", &q);
        fgetc(fd);
    for (int i = 0; i < q;i++)
    {
        char rand[50] = {};
        fscanf(fd, "%[^\n]", rand);
        fgetc(fd);
        //printf("str: %s\n", rand);
        int res=-1;
        
        for (int j = 0; j < n;j++)
        {
            if(strcmp(rand,left[j]) == 0)
            {
                res = j;
                break;
            }
        }
        printf("Case #%d: ", i + 1);
        if(res == -1)
        {
            printf("N/A\n");
        }
        else
        {
            printf("%s\n", right[res]);
        }
    }

    fclose(fd);
}