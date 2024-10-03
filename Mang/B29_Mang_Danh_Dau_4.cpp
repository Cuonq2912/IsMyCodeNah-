#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt[1000001] ={0};

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
    int f_max = cnt[0];
    int gt_max = 0;
    for(int i = 1; i < 1000001; i++){
        if(cnt[i] > f_max){
            f_max = cnt[i];
            gt_max = i;
        }
    }
    cout << gt_max << " " << f_max;
    return 0;
}