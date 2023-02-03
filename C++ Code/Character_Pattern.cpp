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

    int a, b;
    string top = "***";
    string inside = "*..";
    while(q--)
    {
        cin >> a >> b;

        top = "***";
        inside = "*..";

        for (int i = 1; i < b;i++)
        {
            top += "***";
            inside += "*..";
        }

        for (int i = 0; i < a;i++)
        {
            cout << top << "*\n"
                 << inside << "*\n"
                 << inside << "*\n";
        }

        cout << top << "*\n";
    }
}
/*

*/