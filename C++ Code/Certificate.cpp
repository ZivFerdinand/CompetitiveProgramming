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
    ll n,x;
    cin >> n;

    ll max_Valll = 0;
    ll cnt = 0;
    while(n--)
    {
        cin >> x;
        if(x>max_Valll)
        {
            cnt=1;
            max_Valll=x;
        }
        else if(x==max_Valll)
            cnt++;
    }

    cout << cnt << '\n';
}
/*

*/