#include<bits/stdc++.h>
using namespace std;

#define long long ll
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++);
#define FORD(i, a, b) for(int i = a; i > b; i--);

int checkeven(int a[], int n, int i){
    if(i == n) return 1;
    if(a[i] % 2 != 0) return 0;
    return checkeven(a, n, i+1);
}
int main(){
    faster();
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(checkeven(a, n, 0)){
        cout << "YES\n";
    }else cout << "NO\n";
    return 0;
}