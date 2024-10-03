#include<bits/stdc++.h>
using namespace std;

int gt_max(int a, int b){
    if(a > b) return a;
    else return b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    int so_max1 = a[0], so_max2 = a[0];
    for(int &x : a) cin >> x;
    for(int i = 1; i < n; i++){
        so_max1 = gt_max(a[i], so_max1);
    }
    cout << so_max1;
}