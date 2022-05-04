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
#define ld long double
using namespace std;

int main()
{
    int q;
    cin >> q;

    int x;
    char alp[] = {'k', 'm', 'h', 'm', 'h'};
    while(q--)
    {
        cin >> x;
        for (int i = 0; i < 5; i++)
        {
            cout << alp[i];

            char rand;
            (!(i % 2)) ? rand = 'a' : rand = 'e';

            for (int j = 0; j < x;j++)
                cout << rand;
        }
        cout << '\n';
    }   
}

/*

*/