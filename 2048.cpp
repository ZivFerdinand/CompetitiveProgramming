#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <string.h>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#define ll long long
using namespace std;

    int arr[50][50];
    int choice;
void resort()
{
    if(!choice || choice == 2)
    {
        for (int i = 0; i < 4;i++)
        {
            bool again = true;

            if(!choice)
            {
                while(again)
                {
                    again = false;
                    for (int j = 3; j >= 0;j--)
                    {
                        if(j)
                        if(!arr[i][j-1] && arr[i][j])
                            swap(arr[i][j], arr[i][j - 1]), again = true;
                    }
                }
            }

            if(choice)
            {
                while(again)
                {
                    again = false;
                    for (int j = 0; j < 4; j++)
                    {
                        if(j<3)
                        if (!arr[i][j + 1] && arr[i][j])
                            swap(arr[i][j], arr[i][j + 1]), again = true;
                    }
                }
            }
        }
    }
    else
    {
        for (int j = 0; j < 4;j++)
        {
            bool again = true;
            if(choice == 1)
            {
                while(again)
                {
                    again = false;
                    for (int i = 3; i >= 0; i--)
                    {
                        if(i)
                        if (!arr[i - 1][j] && arr[i][j])
                            swap(arr[i][j], arr[i - 1][j]), again = true;
                    }
                }
            }

            if(choice == 3)
            {
                while(again)
                {
                    again = false;
                    for (int i = 0; i < 4; i++)
                    {
                        if(i<3)
                        if (!arr[i + 1][j] && arr[i][j])
                            swap(arr[i][j], arr[i + 1][j]), again = true;
                    }
                }
            }
        }
    }
}

int main()
{
    for (int i = 0; i < 4;i++)
    {
        for (int j = 0; j < 4;j++)
            cin >> arr[i][j];
    }

    cin >> choice;

    resort();

    if(!choice)
    {
        for (int i = 0; i < 4;i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if(j<3)
                {
                    if(arr[i][j] == arr[i][j+1] && arr[i][j] && arr[i][j+1])
                    {
                        arr[i][j] *= 2;
                        arr[i][j+1] = 0;
                        resort();
                    }
                }
            }
        }
    }
    if(choice == 2)
    {
        for (int i = 0; i < 4;i++)
        {
            for (int j = 3; j >= 0; j--)
            {
                if(j)
                {
                    if(arr[i][j] == arr[i][j-1] && arr[i][j] && arr[i][j-1])
                    {
                        arr[i][j] *= 2;
                        arr[i][j-1] = 0;
                        resort();
                    }
                }
            }
        }
    }
    if(choice == 3)
    {
        for (int j = 0; j < 4;j++)
        {
            for (int i = 3; i >= 0; i--)
            {
                if(i)
                {
                    if(arr[i][j] == arr[i-1][j] && arr[i][j] && arr[i-1][j])
                    {
                        arr[i][j] *= 2;
                        arr[i-1][j] = 0;
                        resort();
                    }
                }
            }
        }
    }
    if(choice == 1)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int i = 0; i < 4; i++)
            {
                if(i<3)
                {
                    if(arr[i][j] == arr[i+1][j] && arr[i][j] && arr[i+1][j])
                    {
                        arr[i][j] *= 2;
                        arr[i+1][j] = 0;
                        resort();
                    }
                }
            }
        }
    }

outp:
    for (int i = 0; i < 4;i++)
    {
        for (int j = 0; j < 4;j++)
        {
            cout << arr[i][j];
            if(j<3)
                cout << ' ';
        }
        cout << '\n';
    }
}
/*

*/