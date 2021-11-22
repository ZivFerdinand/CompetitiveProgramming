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

int main()
{
    int n, originalVal;
    cin >> n;
    originalVal = n;

    int space = 0;
    string temp;

    //n *= 2;
    while(n > 0)
    {

        //temp = "";
        // Create Spacet
        temp = "";
        for (int i = 0; i < (originalVal - n - space) / n;i++)
        {
            temp += " ";
        }

        for (int i = 0; i < n; i++)
        {
            cout << temp << '*';
        }

        cout << '\n';
        n /= 2;

        space *= 2;
        space++;
    }
}
/*
***************
 * * * * * * *
   *   *   *
       *
        
       
********
 * * * 
*/