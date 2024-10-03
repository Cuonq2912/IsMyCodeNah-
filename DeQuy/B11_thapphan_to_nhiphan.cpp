#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int trans(int n){
	if(n > 0){
		trans(n/2);
		cout << n % 2;
	}
}
int main(){
	int n;
	cin >> n;
	if(n == 0) cout << "0";
	else cout << trans(n);
}
