#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int arr[130];
    for(int i=97;i<=122;i++){
        cin >> arr[i];
    }    

    string s;
    cin >> s;

    int s_len=s.size(),max_limit=1;
    for(int i=0;i<s_len;i++){
        if(arr[(int) s[i]]>max_limit){
            max_limit=arr[(int) s[i]];
        }
    }

    cout << max_limit*s_len << '\n';
}