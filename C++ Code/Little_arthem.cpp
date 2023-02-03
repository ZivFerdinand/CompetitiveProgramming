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

int main()
{
    int q;
    cin >> q;

    int a, b;
    while(q--)
    {
        cin >> a >> b;
        for (int i = 0; i < a;i++)
        {
            for (int j = 0; j < b;j++)
                (!i && !j) ? cout << 'W' : cout << 'B';

            cout << '\n';
        }
    }
}

/*
8 17
1 1 1 1 1 1 1 1

9/8
*/#include <iostream>
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

int main()
{
    int q;
    cin >> q;

    int a, b;
    while(q--)
    {
        cin >> a >> b;
        for (int i = 0; i < a;i++)
        {
            for (int j = 0; j < b;j++)
                (!i && !j) ? cout << 'W' : cout << 'B';

            cout << '\n';
        }
    }
}

/*
8 17
1 1 1 1 1 1 1 1

9/8
*/