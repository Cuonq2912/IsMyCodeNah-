#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll tsnt = n;
    int somu = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                cnt++;
                n /= i;
            }
            if(cnt > somu || (cnt == somu && i < tsnt)){
                tsnt = i;
                somu = cnt;
            }
        }
    }
    cout << tsnt << ' ' << somu;
    return 0;
}