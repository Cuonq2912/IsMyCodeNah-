#include<bits/stdc++.h>

using namespace std;

bool snt(long long n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	} return true;
}

int demuoc(long long n){
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0 && snt(i)){
			dem++;
		}
	}
	return dem;
}
int main(){
	long long n; cin >> n;
	cout << demuoc(n);
	
}
