#include<bits/stdc++.h>
using namespace std;


int cnt[1000001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int dem = 0;
    int a[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    	if(!cnt[a[i]]) dem++;
    	cnt[a[i]] = 1; 
	}
    cout << dem;
    return 0;
}
