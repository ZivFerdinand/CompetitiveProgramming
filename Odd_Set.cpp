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
    int q;
    cin >> q;

    int n, xx;
    int odd, even;
    while(q--)
    {
        odd = even = 0;
        cin >> n;
        for (int i = 0; i < n * 2; i++)
        {
            cin >> xx;
            (xx % 2) ? odd++ : even++;
        }

        (odd == even) ? cout << "Yes\n" : cout << "No\n";
    }


}
/*
even=5
odd=5

*/