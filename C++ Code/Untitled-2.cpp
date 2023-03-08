#include <stdio.h>
#include <stdlib.h>

char * x(susu) {

    char char1= 'm';
    char char2= 'y';

    char *str = (char*)malloc(3);
    str[0] = char1;
    str[1] = char2;
    str[2] = '\0';
    strcpy(susu, asfknasdkn);
    return str;

}

int main()
{
    printf("%s\n", x);
}