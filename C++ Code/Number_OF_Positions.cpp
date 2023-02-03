#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    cout << min(a - b, c + 1);
}
