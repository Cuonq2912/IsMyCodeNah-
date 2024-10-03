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
    int n; cin >> n;
    vector<pair<pair<int, int>, int>> v;
    for(int i = 0; i < n; i++){
        int x, y, z; cin >> x >> y >> z;
        v.push_back({{x, y}, z});
    }
    for(auto it : v){
        cout << it.f.f + it.f.s + it.s << " ";
    }

    return 0;
}