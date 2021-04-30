#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main(){
    pair < pair <string,int> ,int> x[110];

    int n,cnt;  char space=' ';
    cin >> n;
    int arr[10010];
    string s;   int pts;
    string s_new;

    for(int i=1;i<=n;i++){
        cin >> s;   cin >> pts;
        x[i] = make_pair (make_pair(s,-pts) ,i);

    }

    sort (x+1,x+1+n);

    for(int i=1;i<=n;i++){
        cout << x[i].second << endl;
    }

}
