#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define FOR(i, a, b) for(int i = a; i < b; i++)

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.f < b.f;
}
int main(){
	faster();
	int n;
    ll s;
    cin >> n >> s;
    pair<int, int> a[n];
    FOR(i, 0, n){
        cin >> a[i].f >> a[i].s; // sm con thu i va diem tang them khi danh bai
    }
    sort(a, a + n);
    
    FOR(i, 0, n){
        if(s > a[i].f){
            s += a[i].s;
        }
        else{
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
	return 0;
}