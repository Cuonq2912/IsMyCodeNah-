#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll tribo[1000001];


void tribos(int n){
    tribo[0] = 0;
    tribo[1] = 0;
    tribo[2] = 1;
    for(int i = 3; i <= n; i++){
        tribo[i] = tribo[i - 1] + tribo[i - 2] + tribo[i - 3]; 
    }
}

int main(){
    
    int n; cin >> n;
    tribos(n);
    for(int i = 0; i < n; i++){
        cout << tribo[n] << ' ';
    }
    return 0;
}