#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt[1000001];

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
    int f_max = 0, tmp = 0;
    for(int i = 0; i < n; i++){
        if(cnt[a[i]] > f_max){
            f_max = cnt[a[i]];
            tmp = i;
        }
    }
    cout << tmp+1 << ' ' << f_max << "\n";
    return 0;
}