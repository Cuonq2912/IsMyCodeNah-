#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int st = n; ed = n;
    for(int i = 1; i <= n; i++){
        int val = i;
        for(int j = 1; j < st; j++) cout << "  ";
        for(int j = st; j < n; j++){
            cout << val << " ";
            val++;
        }
        for(int j = n; j <= ed; j++){
            cout << val << " ";
            val--;
        } 
        st++; ed--;
        cout << endl;
    }
    return 0;
}