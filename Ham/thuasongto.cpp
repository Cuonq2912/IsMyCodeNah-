#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin >> n;
	long long tsnt = 0;
	int somu = 0;
	for(int i = 2; i <= n; i++){
		if(n % i == 0){
			int cnt = 0;
			while(n%i == 0){
				cnt++;
				n /= i;
			}
			if(cnt > somu || (cnt == somu && i < tsnt)){
				tsnt = i; 
				somu = cnt;
			}
		}
		if(tsnt == 0){
			tsnt = n;
			somu = 1;
		}
	}
	cout << tsnt << ' ' << somu;
}
