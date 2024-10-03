#include<bits/stdc++.h>
using namespace std;

int gcd(int m, int n){
	while(n){
		int tmp = m % n;
		m = n;
		n = tmp;
	}
	return m;
}

int lcm(int a, int b){
	return a / gcd(a, b) * b;
}
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << gcd(gcd(a, b), gcd(c, d)) << endl;
	int LCM = lcm(lcm(a, b), lcm(c, d));
	cout << LCM;
	return 0;
}
