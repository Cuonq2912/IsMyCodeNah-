#include<bits/stdc++.h>

using namespace std; 

void pt(long long n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){	
				cout << i << " ";
				n /= i;
			}
		}
	}
	if(n != 1){
		cout << n << endl;
	}
}
int main(){
	int n; cin >> n;
	pt(n);
}

