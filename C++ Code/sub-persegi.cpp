#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    ll total = 0;
    for (int i = 1; i < n;i++)
    {
        if(i==1)
            total += n*n;
        else
            total += ((n - i + 1) * (n + 1 - i));
    }
    cout << total+1 << endl;
}

/*
1 -> nxn
2 -> (n-1)^2
3 -> 

*/