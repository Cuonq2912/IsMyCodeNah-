#include<bits/stdc++.h>

using namespace std;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

long long gcd(long long a, long long b){
	while(b){
		long long tmp = a % b;
		a = b;
		b = tmp;
		cout << a <<  " " << b << endl;
	}
	return a;

long long lcm(long long){
	return 1ll* a * b / gcd(a, b);
}
int main(){
	long long a, b; cin >> a >> b;
	cout << gcd(a, b) << endl;


