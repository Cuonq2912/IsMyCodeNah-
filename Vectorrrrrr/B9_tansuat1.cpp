#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(a, b, i) for(int i = 0; i < n; i++)
#define FORD(a, b, i) for(int i = n; i > 0; i--)
#define f first
#define s second


int tim(vector<pair<int, int>> &v, int x){ //truyen tham chieu (&v) copi ddia chi | neu ko se copi tat ca pair
    for(int i = 0; i < v.size(); i++){
        if(v[i].f == x) return i;
    }
    return -1;
}

int main(){
    faster();
    int n; cin >> n;
    int a[n];
    vector<pair<int, int>> v;
    for(int &x : a) cin >> x;
    for(int x : a){
        int t = tim(v, x);
        if(t != -1) v[t].s++;
        else v.push_back({x, 1});
    }
    for(auto p : v){
        cout << p.f << " " << p.s << el;
    }
    return 0;
}