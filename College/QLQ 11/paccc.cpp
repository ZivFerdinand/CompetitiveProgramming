#include<stdio.h>
char map[150][150];
int counter = 0;
int kol = 0;
int bar = 0;
bool done[150][150] = {};
void func(int i,int j)
{
    if(map[i][j]=='#')
    {
        return;
    }
    if(i<0||i>=bar||j<0||j>=kol)
    {
        return;
    }
    if(done[i][j]==1)
    {
        return;
    }
    if(map[i][j]=='.')
    {counter++;
    
    }
    done[i][j] = 1;
    func(i - 1, j);
    func(i + 1, j);
    func(i, j-1);
    func(i, j+1);
}
int  main()
{
    int cases;
    scanf("%d", &cases);
    getchar();
    for (int x = 0; x < cases;x++)
    {
       
        scanf("%d %d", &bar, &kol);
        getchar();
        for (int y = 0; y < 150;y++)
        {
            for (int z = 0; z < 150;z++)
            {
                done[y][z] = 0;
            }
        }
        for (int y = 0; y < bar;y++)
        {
            scanf("%s", &map[y]);
            getchar();
        }
        int pick1 = 0;
        int pick2 = 0;
        for (int y = 0; y < bar;y++)
        {
            for (int z = 0; z < kol;z++)
            {
                if(map[y][z]=='S')
                {
                    pick1 = y;
                    pick2 = z;
                    break;
                }
            }
        }
        counter = 0;
        func(pick1, pick2);
        printf("Case #%d: %d\n",x+1, counter);
    }
}