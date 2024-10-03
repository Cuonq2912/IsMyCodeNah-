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
    int min_val = a[0];
    int max_val = a[0];
    for(int i = 1; i < n; i++){
        /*if(a[i] < min_val){
            min_val = a[i];
        }
        if(a[i] > max_val){
            max_val = a[i];
        }*/
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
    }
    cout << min_val << ' ' << max_val << endl;
}