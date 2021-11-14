#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#define ll long long
using namespace std;

int main(){
    int q;
    cin >> q;

    int r, c, ri, ci;
    while(q--)
    {
        cin >> r >> c >> ri >> ci;

        ri--;
        ci--;

        for (int i = 0; i < r;i++)
        {
            for (int j = 0; j < c;j++)
            {
                if(i == ri || j == ci)
                {
                    cout << '*';
                }
                else
                    cout << '.';
            }

            cout << '\n';
        }

        //cout << '\n';
    }
}
/*

*/