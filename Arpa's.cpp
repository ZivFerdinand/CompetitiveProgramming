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

    if(q==0)
    {
        cout << 1<<'\n';
        return 0;
    }
    switch(q % 4)
    {
        case 1:
            cout << 8;
            break;
            case 2:
                cout << 4;
                break;
                case 3:
                    cout << 2;
                    break;
                    default:
                        cout << 6;
                        break;
    }

    cout << '\n';
}

/*
8 -> 1
4 -> 2
2 -> 3
6 -> 0


*/