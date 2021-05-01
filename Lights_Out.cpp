#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

int main() {
    int arr[5][5];
    int arr2[5][5];

    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            arr[i][j] = 1;
        }
    }

    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cin >> arr2[i][j];

            arr[i][j] = (arr2[i][j] + arr[i][j]) % 2;
            if (i > 0)
                arr[i - 1][j] = (arr2[i][j] + arr[i - 1][j]) % 2;

            if (i < 2)
                arr[i + 1][j] = (arr2[i][j] + arr[i + 1][j]) % 2;

            if (j > 0)
                arr[i][j - 1] = (arr2[i][j] + arr[i][j - 1]) % 2;

            if (j < 2)
                arr[i][j + 1] = (arr2[i][j] + arr[i][j + 1]) % 2;
        }
    }

    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
}
/*
* 
*/
