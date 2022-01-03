#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;
ll pref[100010];
int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	ll n,a,b,cnt=0;
   	string s;

   	cin >> s >> n;

   	for(int i=1;i<s.size();i++){
   		if(s[i]==s[i-1])
   			cnt++;
   		pref[i]=cnt;
   	}
   	pref[s.size()]=cnt+1;

   	while(n--){
   		cin >> a >> b;
   		cout << pref[b-1]-pref[a-1] << '\n';
   	}
}
/*
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <string.h>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#define ll long long
#define ld long double
using namespace std;

int arr[100010] = {};

int main()
{
    string s;
    cin >> s;

    for (int i = 1; i < s.size();i++)
    {
        if(s[i-1]==s[i])
        {
            if(i>1)
                arr[i] = arr[i - 1] + 1;
            else
                arr[i] = 1;
        }
        else
            arr[i] = arr[i - 1];
    }
    
    int n, a, b;
    cin >> n;

    while(n--)
    {
        cin >> a >> b;
        cout << arr[b-1] - arr[a-1] << '\n';
    }
}

/*
......
123456
4
3 4
2 3
1 6
2 6

#..###
010123
5
1 3
5 6
1 5
3 6
3 4

*/

*/

