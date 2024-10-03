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

int main(){
	cout << gcd(14, 18) << endl;
}

