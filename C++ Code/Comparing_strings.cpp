#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <cstdio>
#include <sstream>
#define ll long long
#define ld long long double
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);   cout.tie(NULL);
   int a,b;
   cin >> a >> b;

   for(int i=0;i<max(a,b);i++)
      cout << min(a,b);
   cout << '\n';
}
/* 


*/