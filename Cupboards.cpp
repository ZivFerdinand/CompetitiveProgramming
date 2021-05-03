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
    int n;
    cin >> n;

    int lOpen, lClosed, rOpen, rClosed, a, b;
    lOpen = lClosed = rOpen = rClosed = 0;
    while (n--) {
        cin >> a >> b;
        (a) ? lOpen++ : lClosed++;
        (b) ? rOpen++ : rClosed++;
    }

    cout << min(rOpen, rClosed) + min(lClosed, lOpen);
}
/*
* 
*/
