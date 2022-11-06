#include<stdio.h>
#include<string.h>
#include<iostream>
char func[](char a[], char b[],int n)
{
    if(n==0)
    {
        return a;
    }
    if(n==1)
    {
        return b;
    }

    //char s[1000] = "";
    return strcat(func(a, b, n - 1),func(a,b,n-2));
}

int main()
{
    std::cout << func("a", "b", 2);
}