#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n], d[1001] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        d[a[i]]++;
    }
    
    for(int i = 0; i < n; i++){
        if(d[a[i]] > 0){
            cout << a[i] << " " << d[a[i]] << endl;
            d[a[i]] = 0;
        }
    }

}