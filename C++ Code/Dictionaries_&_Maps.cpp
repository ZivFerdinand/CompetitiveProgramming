#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    map<string,long long> arr;

    int n,n1;
    cin >> n;
    n1=n;

    string s;
    long long a;

    while(n--){
       cin >> s;
       cin >> a;
       
       arr[s]=a;
    }

    while(cin >> s){
       long long c = arr[s];
       if(c==0){
           cout << "Not found" << endl;
       }
       else{
           cout << s << '=' << c << endl;
       }
    }

}