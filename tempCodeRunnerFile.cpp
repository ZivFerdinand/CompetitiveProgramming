#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
long long patok[100010];

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;

        if(i>0)
        {
            patok[i] = patok[i - 1] + x;
        }
        else
            patok[i] = x;
    }
    int x;
    while(k--)
    {
        cin >> x;
        cout << 1+ upper_bound(patok, patok + n, x) << endl;
    }
}