#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll find_max(ll n){
    if(n < 10){ // dieu kien dung
        return n;
    }
   else return max(n % 10, find_max(n/10));
}
ll find_min(ll n){
    if(n < 10){ // dieu kien dung
        return n;
    }
   else return min(n % 10, find_min(n/10));
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    cout << find_max(n) << endl << find_min(n);
    return 0;
}