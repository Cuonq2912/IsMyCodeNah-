#include<bits/stdc++.h>
using namespace std;
using ll =long long;

bool PrimeCheck(int n){
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0) return 0;
    } return n > 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int sum = 0, dem = 0;
    for(int x : a){
        if(PrimeCheck(x)){
            sum += x;
            ++dem;
        }
    }
    cout << fixed << setprecision(3) << (double)sum/dem << endl;
}