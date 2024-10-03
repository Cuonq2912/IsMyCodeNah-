#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool primecheck(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    } return 1;
}

int main(){
    int a, b; 
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        for(int j = 2; j <= sqrt(i); j++){
            if((primecheck(j)) && (i % j == 0) && (i % (j * j) == 0)){
                cout << i << " ";
            }
        }
    }
    return 0;
}