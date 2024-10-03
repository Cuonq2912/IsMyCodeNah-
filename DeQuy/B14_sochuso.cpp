#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int sum(ll n){
	if(n < 10) return 1;
	else{
		return 1 + sum(n/10);
	}
}
 

int main(){
	int n;
	cin >> n;

	else cout << sum(n);
}
