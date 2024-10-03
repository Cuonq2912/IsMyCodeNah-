#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define _Nguyen_Trong_Cuong_ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll ucln(ll m, ll n){
	if(m == 0) return n;
	if(n == 0) return m;
	return ucln(n, m % n);
}

int main(){
	_Nguyen_Trong_Cuong_;
	int m, n;
	cin >> m >> n;
	cout << ucln(m, n) << endl;
	return 0;
}
