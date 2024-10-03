#include <bits/stdc++.h>
using namespace std;


int main(){
	long long n; cin >> n;
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0 ){
			dem++;
			while( n % i == 0 )
				n /= i;
		}
	}
	if(n > 1) {
		dem++;
	}
	
	cout << dem << endl;
}

