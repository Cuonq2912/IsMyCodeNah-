#include<bits/stdc++.h>
using namespace std;

int doixung(int a[], int n){
		int  l = 0, r = n - 1;
		while(l <= r){
			if(a[l] != a[r]) return 0;
			l++; r--;
		}
		return 1;
	} 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    if(doixung(a, n)) cout << "YES";
	else cout << "NO";  	
}