#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <deque>
#define ll long long
using namespace std;

int main(){
    int a, b;
    char op;
    cin >> a >> op >> b;

    switch (op)
    {
    case '*':
        cout << a * b << '\n';
        break;
    case '-':
        cout << a - b << '\n';
        break;
    case '+':
        cout << a + b << '\n';
        break;
    case '=':
        (a == b) ? cout << "benar\n" : cout << "salah\n";
        break;
    case '>':
        (a > b) ? cout << "benar\n" : cout << "salah\n";
        break;
    case '<':
        (a < b) ? cout << "benar\n" : cout << "salah\n";
        break;
    default:
        break;
    }
}	 

/*
 13*n
------
  12


setiap 12

*/
