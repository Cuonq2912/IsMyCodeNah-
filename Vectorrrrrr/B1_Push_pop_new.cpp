#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define el "\n"



int main(){
	vector<int> v;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(t == 1){
			int x; cin >> x;
			v.push_back(x);
		} 
		if(!v.empty() && t == 2) v.pop_back();
	}
	for(int x : v) cout << x << " ";
}
