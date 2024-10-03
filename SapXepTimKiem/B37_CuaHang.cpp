#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define FOR(i, a, b) for(int i = a; i < b; i++)


int main(){
	faster();
	int n, m; 
    cin >> n >> m;
    vector<pair<int, int>> t;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        t.push_back({a, 1});
        t.push_back({b, -1});
    }
    sort(t.begin(), t.end());
    int cnt = 0, ans = 0;
    for(int i = 0; i < t.size(); i++){
        cnt += t[i].second;
        ans = max(ans, cnt);
    }
    cout << ans;
	return 0;
}