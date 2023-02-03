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

    string s;
    int n;
    while(q--)
    {
        cin >> s;
        if(s == "push_back" || s == "push_front")
        {
            cin >> n;
        }
        else if(s == "pop_back")
        {
            myData.pop_back();
            continue;
        }
        else if(s == "pop_front")
        {
            myData.pop_front();
            continue;
        }

        (s == "push_back") ? myData.push_back(n) : myData.push_front(n);
        
    }

    for (auto i = 0; i < myData.size(); i++)
        cout << myData[i] << '\n';
}	 

/*
10 3 5 1
*/
