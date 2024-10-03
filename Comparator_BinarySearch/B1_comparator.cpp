#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define ll long long
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)

int dem(int n, int du){
    int dem = 0;
    while(n){
        if(n % 2 == du) dem++;
        n /= 10;
    }
    return dem;
}

bool cmp1(int a, int b){
    if(dem(a, 0) != dem(b, 0)) return dem(a, 0) < dem(b, 0);
    else return a < b;
}
bool cmp2(int a, int b){
    return dem(a, 1) < dem(b, 1);
}

int main(){
    faster();
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    vector<int> v(a, a + n); // copyyyy
    sort(a, a + n, cmp1);
    for(int &x : a) cout << x << " ";
    cout << endl;
    stable_sort(v.begin(), v.end(), cmp2);
    for(int &x : v) cout << x << " ";
    cout << endl;
    return 0;
}