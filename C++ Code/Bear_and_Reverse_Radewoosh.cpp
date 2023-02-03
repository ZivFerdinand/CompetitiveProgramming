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
	int n,c;
	cin >> n >> c;

	int score[n+10];
	for(int i=0;i<n;i++){
		cin >> score[i];
	}
	int time[n+10];
	for(int i=0;i<n;i++){
		cin >> time[i];
	}

	ll total_Limak_time=0,total_Limak_score=0,total_Radewoosh_time=0,total_Radewoosh_score=0;
	ll zero=0;


	for(int i=0;i<n;i++){
		total_Limak_time+=time[i];
		total_Limak_score+=max(zero,score[i]-c*total_Limak_time);

		total_Radewoosh_time+=time[n-i-1];
		total_Radewoosh_score+=max(zero,score[n-i-1]-c*total_Radewoosh_time);
	}

	if(total_Limak_score>total_Radewoosh_score){
		cout << "Limak\n";
	}
	else if(total_Limak_score<total_Radewoosh_score){
		cout << "Radewoosh\n";
	}
	else 	cout << "Tie\n";
}
