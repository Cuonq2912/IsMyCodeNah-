#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define FOR(i, a, b) for(int i = a; i < b; i++)

void insertSort(int a[], int n){
	for(int i = 1; i < n; i++){
		int x = a[i], pos = i - 1;
		while(pos >= 0 && a[pos] > x){
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = x;
	}
}

int main(){
	faster();
	int n, x; cin >> n >> x;
	int a[n];
	for(int &x : a) cin >> x;
    set<int> se(a, a + n);
	// insertSort(a, n);
    int ans = -1;
	for(int i = 0; i < n; i++){
        if(se.count(a[i] - x) || se.count(a[i] + x)){
            ans = 1;
            break;
        } 
    }
    cout << ans;
	return 0;
}