#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#define ll long long
using namespace std;

int main()
{
    string a, b, temp = "";
    int value;
    cin >> a >> b;

    if (a.size() < b.size())
        swap(a, b);

    for (int i = 0; i < a.size() - b.size();i++)
        temp += "0";


    b = temp + b;
    temp = "";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    bool previous = false;
    for (int i = 0; i < a.size(); i++)
    {
        value = a[i] + b[i] - 96 + previous;
        (value >= 10) ? previous = true, value -= 10 : previous = false;

        temp += value + 48;
    }

    if(previous)
        temp += "1";

    reverse(temp.begin(), temp.end());
    cout << temp << '\n';
}
/*
0 1 2 3 4
0 1 2 3 4 5
*/