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
    int q;
    cin >> q;

    int n;
    string s;
    while(q--)
    {
        cin >> n;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < s.size();i++)
        {
            int val = (int)s[i] - 48;
            if(val && i != s.size() - 1)
                cnt++;

            cnt += val;
        }

        cout << cnt << '\n';
    }
}
/*

*/