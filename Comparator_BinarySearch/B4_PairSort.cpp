#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define f first
#define s second

bool cmp(pair<int, int> a, pair<int, int> b){
    if(pow(a.f, 2) + pow(a.s, 2) != pow(b.f, 2) + pow(b.s, 2)){
        return pow(a.f, 2) + pow(a.s, 2) < pow(b.f, 2) + pow(b.s, 2);
    }
    if(a.f != b.f) return a.f < b.f;
    else return a.s < b.s;
}

int main(){
    faster();
    int n;
    cin >> n;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].f >> a[i].s;
    }
    sort(a, a + n, cmp);
    for(auto p : a){
    	cout << p.f << " " << p.s;
    	cout << endl;
	}
    return 0;
}