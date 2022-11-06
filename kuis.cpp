#include<stdio.h>
#include<string.h>
#include<iostream>

void func(char first[], char second[], int n)
{
    if(n==0)
    {
        printf("%s", first);
        return;
    }
    else if(n==1)
    {

        printf("%s", second);
        return;
    }
   
    else
    {
        func(first, second, n - 1);
        func(first, second, n - 2);
    }
}

int main()
{
        func("a", "b", 3);
}