#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int FindFirstNumb(ll n){
	if(n < 10) return n;
	else{
		return FindFirstNumb(n/10);
	}
}
 

int main(){
	int n;
	cin >> n;
	cout << FindFirstNumb(n);
}
