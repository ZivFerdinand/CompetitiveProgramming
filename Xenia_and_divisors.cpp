#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;
int cnt[10]={};
int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int n,x;
   	cin >> n;

   	for(int i=0;i<n;i++){
   		cin >> x;
   		cnt[x]++;
   	}

   	if(cnt[5] || cnt[7] || (!cnt[2] && cnt[4]) || (cnt[3] && !cnt[6]) || cnt[4]>cnt[2])
   		cout << -1;
   	else if(cnt[1]==cnt[2]+cnt[3] && cnt[2]+cnt[3]==cnt[4]+cnt[6] && cnt[4]+cnt[6]-cnt[2]==cnt[3]){
   		for(int i=0;i<n/3;i++){
   			cout << 1 << ' ';
   			if(cnt[2]){
   				cout << 2;
   				cnt[2]--;
   			}
   			else
   				cout << 3;
   			cout << ' ';
   			if(cnt[4]){
   				cout << 4;
   				cnt[4]--;
   			}
   			else
   				cout << 6;
   			cout << '\n';
   		}
   	}
   	else
   		cout << -1;
}
/*
1 2 4
1 2 6
1 3 6

*/