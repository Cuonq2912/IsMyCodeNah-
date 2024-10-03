#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		int i_tmp = a[i] / 1000;
		int i_truoc_tmp = a[i-1] / 1000;
		int i_sau_tmp = a[i+1] / 1000;
		if(i_tmp * i_truoc_tmp < 0 || i_tmp * i_sau_tmp < 0 ){
			cout << a[i] << " ";
		}
	}
}
