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
	int n,xx;
	cin >> n;
	xx=n-1;

	int arr[n+10],sorted[n+10];
	for(int i=0;i<n;i++){
		cin >> arr[i];
		sorted[i]=arr[i];
	}   

	bool used[n+10];
	memset(used,false,sizeof used);
	sort(sorted,sorted+n);

	for(int i=0;i<n/2;i++){
		int x=sorted[i];
		int y=sorted[xx];
		int found=0;	int loc_x=0,loc_y=0;	bool found_x=0,found_y=0;

		for(int j=0;j<n;j++){
			if(arr[j]==x && !used[j] && !found_x){
				used[j]=true;
				loc_x=j+1;
				found++;
				found_x=1;
			}
			else if(arr[j]==y && !used[j] && !found_y){
				used[j]=true;
				loc_y=j+1;
				found++;
				found_y=1;
			}
			if(found>=2)	break;
		}
		cout << loc_x << ' ' << loc_y << '\n';
		
		xx--;
	}
}
