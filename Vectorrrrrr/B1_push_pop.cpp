#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(a, b, i) for(int i = 0; i < n; i++)
#define FORD(a, b, i) for(int i = n; i > 0; i--)
#define f first
#define s second




int main(){
    faster();
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        if(t == 1){
            int x; cin >> x;
            v.push_back(x);
        }
        if(!v.empty() && t == 2){
            v.pop_back();
        }
    }
    for(int x : v) cout << x << " ";

    return 0;
}