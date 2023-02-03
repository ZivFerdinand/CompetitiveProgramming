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
    int n, x;
    cin >> n >> x;

    ll cnt = 0;
    for (int i = 1; i <= n;i++)
    {
        if(!(x%i) && x/i<=n)
            cnt++;
    }
    cout << cnt << '\n';
}

/*
()(()()()((()()()(((())))()))()(

*/