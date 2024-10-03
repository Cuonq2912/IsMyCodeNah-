#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt[1000001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, dem = 0; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(int i = 0; i < 1000001; i++){
        if(cnt[i]){
            cout << i << " " << cnt[i] << endl;
        }
    }
    return 0;
}