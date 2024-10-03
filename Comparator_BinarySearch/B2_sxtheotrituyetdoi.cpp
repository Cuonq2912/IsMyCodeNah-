#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++);
#define FORD(i, a, b) for(int i = a; i > b; i--);

int X;
bool cmp1(int a, int b){
    int t1 = abs(a - X);
    int t2 = abs(b - X);
    if(t1 != t2) return t1 < t2;
    else return a < b;
}
bool cmp2(int a, int b){
    if(a % 2 == 0 && b % 2 == 0) return a < b; // trả về true hoặc false ( tức là đổi chỗ khoặc không dổi)
    if(a % 2 != 0 && b % 2 != 0) return a > b;
    if(a % 2 == 0 && b % 2 != 0) return true;
    else return false;
}
int main(){
    faster();
    int n; cin >> n >> X;
    int a[n];
    for(int &x : a) cin >> X;
    sort(a, a + n, cmp1);
    for(int &x : a) cout << x << " ";
    cout << endl;
    sort(a, a + n, cmp2);
    for(int &x : a) cout << x << " ";
    cout << endl;
    return 0;
}