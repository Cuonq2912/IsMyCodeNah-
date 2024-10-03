#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(a, b, i) for(int i = 0; i < n; i++)
#define FORD(a, b, i) for(int i = n; i > 0; i--)
#define f first
#define s second


int LastPos(const vector<int> &a, int x){
    int l = 0, r = a.size() - 1, res = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] < x){
            res = m;
            l = m + 1; // tim ben phai xem con x ko
        }
        else r = m - 1;
    }
    return res;
}

int main(){
    faster();
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++){
        cout << 1 + LastPos(b, a[i]) << " ";
    }
    return 0;
}
// auto it = lower_bound(a, a + n, 4);