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
    int t;
    cin >> t;

    ll money,n;
    while(t--){
        cin >> money;
        cin >> n;

        ll arr[n+10];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        bool found=0;
        for(int i=0;i<n;i++){
            int is_being_searched=money-arr[i];
            bool found=0;
            for(int j=0;j<n;j++){
                if(arr[j]==is_being_searched && j!=i){
                    cout << i+1 << ' ' << j+1 << '\n';
                    found=true;
                    break;
                }
            }
            if(found)break;
        }
    }
}
