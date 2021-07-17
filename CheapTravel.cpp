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
    int totalRides, priceNormalTicket, needForSpecialTicket, priceSpecialTicket;
    cin >> totalRides >> needForSpecialTicket >> priceNormalTicket >> priceSpecialTicket;

    if(priceSpecialTicket > needForSpecialTicket * priceNormalTicket)
    {
        cout << totalRides * priceNormalTicket;
    }
    else
    {
        int specialBuy = totalRides / needForSpecialTicket;
        int x = ((totalRides % needForSpecialTicket));
        if(x*priceNormalTicket < priceSpecialTicket)
            x = x * priceNormalTicket;
        else
            x = priceSpecialTicket;
        cout <<  x + (specialBuy * priceSpecialTicket);
    }
}	 

/*
10 3 5 1
*/
