#include <bits/stdc++.h>
using namespace std;
using ll = long long;R

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    for(int i = 0; i <= n/a; i++){
       ll res = n - a*i;
       if(res % b == 0){
        cout << "YES\n";
        break;
       }
        else cout << "NO\n";
        break;
       }        
    return 0;
}