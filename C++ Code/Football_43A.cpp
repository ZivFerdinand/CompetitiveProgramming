#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

int main()
{
    int n, maxx = 0;
    cin >> n;

    string rand, output;
    map<string, int> myData;
    for (int i = 0; i < n; i++)
    {
        cin >> rand;
        myData[rand]++;
        if (myData[rand] > maxx)
        {
            maxx = myData[rand];
            output = rand;
        }
    }
    cout << output;
}
/*
* 114114
* 14144
*/
