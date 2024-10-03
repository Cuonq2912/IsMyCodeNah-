#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

ll luythuanhiphan(int x, int y){
	if(y == 0) return 1;
	ll X = luythuanhiphan(x, y /2);
	if(y % 2 == 0) return (X%mod)*(X%mod) % mod;
	else return (X%mod)*(X%mod) % mod *(x % mod)%mod;
}

int main(){
	
	int x, y, n;
	cin >> x >> y >> n;
	cout << luythuanhiphan(x, y);

	return 0;
}
