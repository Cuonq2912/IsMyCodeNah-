#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool stn(int n){
    int tmp = 0, rev = n;
    while(n){
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    return rev == tmp;
}
int suma(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return(sum % 10) == 8;
}

bool check6(int n){
    while(n){
        if((n % 10) == 6) return 1;
        n /= 10;
    }
    return 0;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(suma(i) && stn(i) && check6(i)){
            cout << i << ' ';
        }
    }
}