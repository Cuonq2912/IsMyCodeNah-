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
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(auto it = v.begin(); it != v.end(); ++it) cout << *it << " ";
    cout << el;
    sort(v.begin(), v.end(), greater<int>());
    for(auto it = v.begin(); it != v.end(); ++it) cout << *it << " ";
    cout << el;
    reverse(v.begin(), v.end());
    for(auto it = v.begin(); it != v.end(); ++it) cout << *it << " ";
    cout << el;
    return 0;
}