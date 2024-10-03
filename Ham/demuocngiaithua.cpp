#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1000000007;
int dem[100005]; //dem[i] la somu cua tsnt i
void pt(int n){// tao mang luu somu sau khi pt n
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            n /= i;
            dem[i]++;
        }
    }
    if(n > 1) dem[n]++;
}
/*
int demuoc(int n){
    int dem = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            dem++;
        }
        if(i != n / i){
            dem++;
        }
    }
    return dem;
}

ll gt(int n){
    int ans = 1, tmp = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
        tmp *= (ans % mod);
    }
    return ans % mod;
}*/
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    ll ans = 1;
    for(int i = 2; i <= n; i++){
        pt(i);
    }
    for(int i = 2; i <= n; i++){
        if(dem[i] != 0){
            ans = (ans*(dem[i]+1)) % mod;
        }
    }
    cout << ans;
    return 0;
}