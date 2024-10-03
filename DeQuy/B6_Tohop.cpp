#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll tohop(int n, int k){
	if(k == 0 || n == k) return 1;
	return tohop(n-1, k-1) + tohop(n-1, k);
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << tohop(n, k) << "\n";
	}
	return 0;
}
