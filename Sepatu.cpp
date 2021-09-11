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
int sepatuBebek[1010];
int sepatuBaru[1010];
bool datum[1010];


int main(){
    memset(datum, 0, sizeof datum);
    int n, m, lastM_Index=0;
    cin >> n >> m;

    for (int i = 0; i < n;i++)
        cin >> sepatuBebek[i];
    for (int i = 0; i < m;i++)
        cin >> sepatuBaru[i];

    sort(sepatuBebek, sepatuBebek + n);
    sort(sepatuBaru, sepatuBaru + m);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        while(sepatuBaru[lastM_Index] <= sepatuBebek[i] + 1 && lastM_Index < m)
        {
            if(datum[lastM_Index] == false)
            if(sepatuBebek[i] == sepatuBaru[lastM_Index] || sepatuBebek[i] + 1 == sepatuBaru[lastM_Index])
            {
                datum[lastM_Index++] = true;
                total++;
                break;
            }
            lastM_Index++;
        }
    }
    cout << total << '\n';
}
/*
   10 10 11 12 13
9  10 11 11 13
*/