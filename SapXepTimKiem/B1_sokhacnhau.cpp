#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define f first
#define s second
#define pb push_back
#define Faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
    Faster();
    int n; cin >> n;
    int a[n];
    set<int> se;
    FOR(i, 0, n){
        cin >> a[i];
        se.insert(a[i]);
    }
    cout << se.size(); 
    return 0;
}