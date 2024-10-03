#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int sum(ll n){
	int ans = n % 10;
	if(n == 0) return 0;
	ans += sum(n/10);
	return ans;
}
 

int main(){
	int n;
	cin >> n;
	if(n == 0) cout << "0";
	else cout << sum(n);
}
