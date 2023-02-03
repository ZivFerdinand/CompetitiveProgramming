#include <iostream>
using namespace std;
 
int main(){
    long long a,b,n;
    cin >> a >> b >> n;
    
    long long A =a/n;
    if(a%n!=0){
         A++;
    }
    
    long long B =b/n;
    if(b%n!=0){
        B++;
    }
    cout << A*B << '\n';
}