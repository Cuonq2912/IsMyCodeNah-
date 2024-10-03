#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

double sum_phanso(ll n){
	if(n == 1) return 1;
	else return 1.00/n + sum_phanso(n - 1);
}

int main(){
	
	ll x;
	cin >> x;
	cout << fixed << setprecision(3) << sum_phanso(x) << endl;

	return 0;
}
