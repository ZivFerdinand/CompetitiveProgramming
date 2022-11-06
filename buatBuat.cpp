#include <stdio.h>

int sum;
int n, m;
char path[150][150];
int check[150][150];

void pathWalker(int i,int j)
{
    if (i >= n || j >= m || i < 0 || j < 0)
        return;
    if(path[i][j] == '#')
        return;
    if(check[i][j])
        return;
    if (path[i][j] == '*' && check[i][j] == 0)
    {
        sum++;
    }

    check[i][j] = 1;

    pathWalker(i + 1, j);
    pathWalker(i - 1, j);
    pathWalker(i, j + 1);
    pathWalker(i, j - 1);
}

int main()
{
    int q;
    scanf("%d", &q);
    getchar();


    for (int i = 1; i <= q;i++)
    {
        scanf("%d %d", &n, &m);
        getchar();
        int currX = -1, currY = -1;
        sum = 0;
        for (int j = 0; j < 100;j++)
        {
            for (int k = 0; k < 100;k++)
            {
                check[j][k] = 0;
            }
        }
        for (int j = 0; j < n; j++)
        {
            scanf("%s", path[j]);
            for (int k = 0; k < m; k++)
            {
                if (path[j][k] == 'P')
                    currX = j, currY = k;
            }
            getchar();
        }
        if(currX >= 0 && currY>= 0)
            pathWalker(currX, currY);
    
        printf("Case #%d: %d\n", i, sum);
    }
}