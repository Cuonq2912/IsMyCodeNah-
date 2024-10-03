#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define FOR(i, a, b) for(int i = a; i < b; i++)

int dem[1000001];
void CountingSort(int a[], int n){
	int k = -1e9;
    FOR(i, 0, n){
        dem[a[i]]++;
        k = max(k, a[i]);
    }
    FOR(i, 0, k + 1){
        if(dem[a[i]]){
            FOR(j, 0, dem[i]){
                cout << i << " ";
            }
        }
    }
}
int main(){
	faster();
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	CountingSort(a, n);
	return 0;
}
