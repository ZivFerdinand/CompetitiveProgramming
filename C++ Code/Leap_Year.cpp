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

int main(){
    ios_base::sync_with_stdio(false);
    int year;
    cin >> year;

    int is_a_leap_year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                is_a_leap_year=29;
            else
                is_a_leap_year=28;
        }
        else
       	is_a_leap_year=29;
    }
    else
    	is_a_leap_year=28;
    	
	cout << is_a_leap_year << '\n';
}
