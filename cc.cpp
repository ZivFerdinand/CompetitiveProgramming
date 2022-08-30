#include <stdio.h>

int a, b;
void printer(int aa){
    for (int i = 0; i < a;i++)
    {
        for (int j = 0; j < a;j++)
        {
            if(aa==1)
                printf("#");
            else if(aa==2)
            {
                ((i + 1) % b == 0) ? printf("#") : printf(".");
            }
            else
            {
                ((j + 1) % b == 0) ? printf("#") : printf(".");
            }
            
        }
        printf("\n");
    }
}


int main()
{
    scanf("%d %d", &a, &b);

    printer(1);
    printf("\n");
    printer(2);
    printf("\n");
    printer(3);
    printf("\n");
}