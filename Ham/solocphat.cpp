#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool kt068(int n){
        while(n){
        int tmp = n % 10;
        if(tmp != 0 && tmp != 6 && tmp != 8) return 0;
        n /= 10;
    }
    return n == 0;
}
    
int main(){
    ll n; cin >> n;
    cout << kt068(n);
}