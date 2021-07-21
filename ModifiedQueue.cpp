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
    deque<int> myData;
    int q;
    cin >> q;

    int X, Y;
    string s;
    while(q--)
    {
        cin >> s;
        if(s == "add")
        {
            cin >> X >> Y;
            for (int i = 0; i < Y;i++)
                myData.push_back(X);

            cout << myData.size() << '\n';
        }
        else if(s == "del")
        {
            cin >> Y;
            cout << myData[0] << '\n';
            for (int i = 0; i < Y;i++)
                myData.pop_front();
        }
        else
        {
            reverse(myData.begin(), myData.end());
        }
    }
}	 

/*
10 3 5 1
*/
