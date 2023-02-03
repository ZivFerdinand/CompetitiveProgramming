#include <bits/stdc++.h>
using namespace std;
BELOM JADI
struct kontak{
    string nama;
    int no_telp;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    
    bool tidaksama=false;
    string s;
    
    cin >> n;

    kontak arr[100005];
    vector<string> myvector (arr,arr+n);
    vector<string> string::iterator it;

    for(int i=0;i<n;i++){
        cin >> arr[i].nama;
        cin >> arr[i].no_telp;
    } 
    while(cin >> s){
        it = find (myvector.begin(), myvector.end(), s);
        if (it != myvector.end())
            cout << arr[it - myvector.begin() + 1].nama << '=' << arr[it - myvector.begin() + 1].no_telp;
        else
            cout << "Not found\n";
    }
    return 0;
}

