#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int vt_max = 0, vt_min = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > a[vt_max]){
            vt_max = i;
        }
        if(a[i] <= a[vt_min]){
            vt_min = i;
        }
    }cout << vt_min << " " << vt_max;
    
}