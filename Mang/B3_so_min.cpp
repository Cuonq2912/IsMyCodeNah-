#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int gt_min = a[0], dem = 0;
    for(int x : a){
        gt_min = min(gt_min, x);
    }
    for(int x : a){
        if(gt_min == x){
            dem++;
        }
    }
    cout << dem;
}