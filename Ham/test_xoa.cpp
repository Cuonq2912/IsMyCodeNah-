#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

bool tn(long long n){
    long long rev = 0, tmp = n;
    while(n){
        rev = rev * 10 + n % 10;
        n /= 10;
    if(rev == tmp){
    	return true;
	}
	else return false;
}
int main(
    FastIO;
    int n; cin >> n;
    if(tn(n)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

