#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define FOR(i, a, b) for(int i = a; i < b; i++)

void bubbleSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
}
// O{n^2}
int main(){
	faster();
	int n;
	cin >> n;
	int a[n];
	FOR(i, 0, n) cin >> a[i];
	bubbleSort(a, n);
	FOR(i, 0, n) cout << a[i] << " ";
	return 0;
}
