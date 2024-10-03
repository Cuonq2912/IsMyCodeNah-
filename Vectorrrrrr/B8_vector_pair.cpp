#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define f first
#define s second
#define ppi pair<pair<int, int>, int>



int main(){
    faster();
    int n; cin >> n;
    vector<ppi> v;
    FOR(i, 0, n){
        int x, y, z;
        cin >> x >> y >> z;
        v.push_back({{x, y}, z});
    }
    for(ppi p : v){
        cout << p.f.f + p.f.s + p.s << " ";
    }
    return 0;
}