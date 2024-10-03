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
    int k; cin >> k;
    int dem = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] + a[j] == k){
                ++dem;
            }
        }
    }
    cout << dem << endl;
}