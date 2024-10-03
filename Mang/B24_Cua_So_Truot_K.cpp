#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    int a[n], sum = 0;
    for(int &x : a) cin >> x;
    for(int i = 0; i < k; i++) sum += a[i];
    cout << sum << ' ';
    for(int i = k; i < n; i++){
        sum -= a[i - k];
        sum += a[i];
        cout << sum << " ";
    }
    return 0;
}  
/* hoăc
0 -> n - k
sum -= a[i]
sum += a[i +k]
*/