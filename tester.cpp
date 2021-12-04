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

    int n = 35;
    int ind;
    double minn = n * 10;
    for (double i = 1; i < n; i++)
    {
        double x = i + ceil(n / (i + 1));
        if(minn>x)
        {
            minn = x;
            ind = i;
        }
    }
    cout << ind;
}
/*
1000 -> 27
3000 -> 49
35 -> 4
*/