#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#define ll long long
using namespace std;

int main(){
   	ios_base::sync_with_stdio(false);
    
    cin.tie();
    cout.tie();
    long long n, m;
    cin >> n >> m;

    //KASUS UTK -1
    if(5 * m < n || n < m)
    {
        cout << "-1 -1\n";
        return 0;
    }
    //END

    ((4 * m >= n) ? cout << 0 : cout << (n - 4 * m));
    (5 * m <= n) ? cout << ' ' << m : cout << ' ' << ((n - m) / 4);
    cout << '\n';
}	 

/*
14
5 4
16 3
7 10
x x x x x x x x x x
1 1 1 1 1 1 1 1 1 1
5 4
x x x x
2 1 1 1

5 x berapa yg lebih kecil dari n

14 4
x x x x
5 5 3 1

15 - 14
5 x sekian <= 14
*/
