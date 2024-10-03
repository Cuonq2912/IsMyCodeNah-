#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool pt(int n){
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            dem++;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1) dem++;
    return dem >= 3;

}

bool stn(int n){
    if(n < 10) return 1;
    int tmp = n; int rev = 0;
    while(n){
        rev =rev*10 + n % 10;
        n /= 10;
    }
    return rev == tmp;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    int ok = 0;
    cin >> a >> b;
    for(int i =a; i <= b; i++){
        if(stn(i) && pt(i)){
            cout << i << " ";
            ok = 1;
        }
    }
    if(ok == 0) cout << "-1";
    return 0;
}