#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//tonguoc
ll tonguoc(ll n){
    ll sum = 0;
    for(int i = 1; i < sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(i != n /i){
                sum += n/i;
            }
        }
    }
    return sum;
}
//demuoc
int demuoc(ll n){
    int dem = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            ++dem;
            if(i != n/i){
                ++dem;
            }
        }
    }
    return dem;
}
//ktra so chinh phuong
bool scp(ll n){
    ll tmp = sqrt(n);
    if(1ll * tmp * tmp == n){
        return 1;
    }
    else return 0;
}
//sothuannghich
bool tn(ll n){
    ll rev = 0, tmp = n;
    while(n){
    rev = rev * 10 + n % 10;
    n /= 10;
}
if(rev == tmp){
    return true;
}
return false;
}
//songuyento
bool snt(ll n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
ll gcd(ll a, ll b){
    for(ll i = min(a, b); i >= 1; i++){
        if(a % i == 0 && b & i ==0){
            return 1;
        }
    }
    return 0;
}
ll gcd2(ll a, ll b){
    while(b){
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
ll lcm(ll a, ll b){
    return a * b / gcd2(a, b);
}

void pt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                cout << i << " ";
                n /= i;
            }
        }
    }
    if(n != 1){
        cout << n << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cout << tonguoc(28) << endl;
    cout << demuoc(28) << endl;
    ll n; cin >> n;

    if(scp(n)){
        cout << "YES\n";
    }
    else cout << "No\n";

    if(tn(1234321)){
        cout << "YES\n";
    } else cout << "NO\n";

    if(snt(n)){
        cout << "YES\n";
    } else cout << "NO\n";

    cout << gcd2(32563456, 435467646);
    cout << lcm(48902385023, 3841384);

    pt(60);
}