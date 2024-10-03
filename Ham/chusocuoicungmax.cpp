#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool primecheck(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    } return n > 1;
}
bool last_digit_check(int n){
    int tmp = n % 10;
    n /= 10;
    while(n){
        if(n % 10 > tmp) return 0;
        n/= 10;
    }
    return n == 0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int dem = 0;
    for(int i = 2; i <= n; i++){
        if(last_digit_check(i) && primecheck(i)){//vong lap nao nhanh hon thi de truoc
            cout << i << " ";
            dem++;
        }
    } cout << "\n" << dem;
}