#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define f first
#define s second


int main(){
	int n; cin >> n;
    int a[n], d[n];
    set<int> se;
    for(int &x : a) cin >> x;
    int q; cin >> q;
    for(int l = n - 1; l >= 0; l--){
        se.insert(a[l]);
        d[l] = se.size();
    }
    while(q--){
        int lf; cin >> lf;
        cout << d[lf] << endl;
    }
    return 0;
}