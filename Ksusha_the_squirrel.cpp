#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n,k;
    cin >> n >> k;
 
    string s; cin>>s;
    bool cont=true;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            int j;
            for(j=i+1;j<n;j++){
                if(s[j]=='.'){
                    break;
                }
            }
            if(j-i+1>k){
                cout << "NO\n";
                cont=false;
                break;
            }
            i=j-1;
        }
    }
    if(cont){
        cout << "YES\n";
    }
}