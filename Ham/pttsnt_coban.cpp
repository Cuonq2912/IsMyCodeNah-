#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void pt(int n){
    for(int i = 2; i<= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                cout << i << ' ';
                n /= i;
            }
        }
    }
    if(n != 1) cout << n << ' ';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n = 1212;
    pt(n);

    return 0;
  }