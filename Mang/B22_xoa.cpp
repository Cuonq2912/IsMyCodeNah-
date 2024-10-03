#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x; cin >> n >> x;
    int a[n];
    int pos = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == x && pos == -1) pos = i;
    }
    if(pos == -1){
        cout << "NOTFOUND\n";
        return 0;
    }
    for(int i = 0; i < n; i++){
        if(i != pos) cout << a[i] << ' ';
    }
    return 0;
}