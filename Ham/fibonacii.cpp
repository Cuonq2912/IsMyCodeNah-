#include<bits/stdc++.h>

using namespace std;
// ktr 1 so co la fibonacci
bool check(long long n){
	// 01 
	if(n == 0 || n == 1 )
		return true;
	//sin ra day fibo : 2
	long long fn1 = 1, fn2 = 0;
	for(int i = 2; i <= 92; i++){
		long long fn = fn1 + fn2;
		cout << i << " " << fn << endl;
		if(fn == n)
			return true;
			fn2 = fn1; fn1 = fn;
	}
	return 0;
}
bool check2( long long n){
	F[0] = 1;
	F[1] = 1;
	for(int i = 2; i <= 92; i++){
		F[i] = F[i - 1] + F[i - 2];
	}
	for(int i = 1;i <= 92; i++){
		if(n == F[i]){
			return 1;
		}
	}
	return 0;
}
int main(){
	cout << check2(48385748057023) << endl;
}
