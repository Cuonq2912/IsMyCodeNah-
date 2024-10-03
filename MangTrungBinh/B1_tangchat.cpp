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
	int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 1; i < n; i++){
        if(a[i] < a[i - 1]){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
	return 0;
}