#include<bits/stdc++.h>
using namespace std;

#define long long ll
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++);
#define FORD(i, a, b) for(int i = a; i > b; i--);

bool BS(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l + r)/2;
        if(a[mid] == x) return 1;
        else if(a[mid] < x ) r = mid - 1;
        else r = mid + 1;
    }
    return 0;
}

// BY DEQUY
bool BS(int a[], int l, int r, int x){
    if(l > r) return 0;
    int mid = (l + r)/2;
    if(a[mid] == x) return 1;
    else if(x > a[mid]) return BS(a, l, mid - 1, x);
    else return BS(a, mid + 1, r, x);
    return BS(a, l, mid - 1, x);
}
int main(){
    faster();
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(BS(a, n, 20)){
        cout << " YES\n";
    }else cout << "NO\n";
    return 0;
}