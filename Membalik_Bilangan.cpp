#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <deque>
#define ll long long
using namespace std;

int main(){
    int q;
    cin >> q;

    string s;
    while(q--)
    {
        cin >> s;
        reverse(s.begin(), s.end());

        cout << stoi(s) << '\n';
    }
}	 

/*
1300

*/
