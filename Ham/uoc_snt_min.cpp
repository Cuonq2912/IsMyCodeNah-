#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int pt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return i;
        }
    }
    return n;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    //cach1
/*
    if(n == 1) return 1;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout << 2 << endl;
        }else if(i % 3 == 0){
            cout << 3 << endl;
        }else{
            cout << i << endl;
        }
    }
*/
    for(int i = 1; i <= n; i++){
        cout << pt(i) << endl;
    }
    return 0;
}