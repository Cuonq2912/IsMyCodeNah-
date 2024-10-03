#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int pt(int n, int k){
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            dem++;
            n /= i;
            if(dem == k) return i;
        }  
    }
    if(n > 1) dem++;
    if(dem == k) return n;
    return -1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    cout << pt(n, k);
}