#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fd = fopen("testdata.in", "r");
    
        char dataa[5] = {};
        fscanf(fd,"%[^\0]", dataa);

        printf("%d", strlen(dataa));
    
}