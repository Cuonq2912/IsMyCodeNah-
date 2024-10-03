#include<bits/stdc++.h>
using namespace std;
using ll = long long;

 trans(ll n){
	if(n > 0){
		int t = n % 16;
		trans(n/16);
		if(t < 10) cout << t;
		else{
			switch(t){
				case 10: cout << "A"; break;
				case 11: cout << "B"; break;
				case 12: cout << "C"; break;
				case 13: cout << "D"; break;
				case 14: cout << "E"; break;
				case 15: cout << "F"; break;
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	if(n == 0) cout << "0";
	else trans(n);
}
