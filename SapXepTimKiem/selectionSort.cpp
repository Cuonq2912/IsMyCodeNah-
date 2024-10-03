#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define FOR(i, a, b) for(int i = a; i < b; i++)

void selectionSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int min_pos = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_pos]){
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
	}
}

int main(){
	faster();
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	selectionSort(a, n);
	for(int &x : a) cout << x << " ";
	return 0;
}
// O(n^2)