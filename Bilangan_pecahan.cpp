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
    int a, b;
    cin >> a >> b;

    if(__gcd(a,b)==1)
    {
        cout << "Tidak\n";
    }
    else
    {
        cout << a / __gcd(a, b) << ' ' << b / __gcd(a, b) << '\n';
    }
}

/*

*/