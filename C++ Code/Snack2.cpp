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
// ver..(1.1)
string ent="\n";
string space=" ";
int main(){
   ios_base::sync_with_stdio(false);
   ll a,b;
   cin >> a >> b;
   cout << (a*b)/__gcd(a,b) << ent;
}
/*
5 25

kpk=25
fpb=5

3 21

kpk=21
fpb=3

*/