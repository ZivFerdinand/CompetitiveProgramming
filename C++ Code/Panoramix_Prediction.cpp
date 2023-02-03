#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> (n) >> m;

    while (true) {
        n++;
        bool found = false;
        for (int i = 2;i < n;i++) {
            if (n % i == 0) {
                found = true;
                break;
            }
        }
        if (!found)break;
        
    }

    (n == m) ? cout << "YES\n" : cout << "NO\n";
}
/*
* 
*/
