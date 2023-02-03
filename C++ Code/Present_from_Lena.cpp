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
    int n;
    cin >> n;

    n *= 2;
    if(n%2==0)  n++;
    int star=1;
    for(int i=0;i<n;i++){
        string space;
        for(int j=0;j<((n-star)/2);j++){
            cout << "  ";
            space+="  ";
        }
        for(int j=0;j<star;j++)
        {
            if(j<=star/2)
            cout << j;
            else
                cout << star - j - 1;

                if(j<star-1)
                    cout << ' ';
        }

        if(i<n/2)   star+=2;
        else        star-=2;
        cout << '\n';
    }
}
/*

*/