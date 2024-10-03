#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt[1000006];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(cnt[a[i]]){
            cout << a[i] << " " << cnt[a[i]] << '\n';
            cnt[a[i]] = 0;
        }
        

    }
    return 0;
}