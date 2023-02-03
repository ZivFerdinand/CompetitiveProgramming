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

   ll meeting=(a+b)/2;
   ll total;

   if(!abs(meeting-a))
      total=0;
   else if(abs(meeting-a)==1)
      total=1;
   else if(abs(meeting-a)==2)
      total=3;
   else
      total=(abs(meeting-a))*(abs(meeting-a)-1);

   if(!abs(meeting-b))
      total+=0;
   else if(abs(meeting-b)==1)
      total+=1;
   else if(abs(meeting-b)==2)
      total+=3;
   else
      total+=(abs(meeting-b))*(abs(meeting-b)-1);

   cout << total << '\n';
}
/* 
1 4
1 2 3 4
*/