#include<iostream>
#include<math.h>
using namespace std;
using ll = long long;

bool primecheck(ll n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    } return 1;
}

int main(){
    ll n;
    cin >> n;
    for(int i = 1; i <= sqrt(n); i++){
        if(primecheck(i)){
            cout << 1ll*i*i << " ";
        }
    }
}