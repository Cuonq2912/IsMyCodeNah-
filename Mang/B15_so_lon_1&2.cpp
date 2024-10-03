#include<bits/stdc++.h>
using namespace std;

int gt_max(int a, int b){
    if(a > b) return a;
    else return b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    int so_max1 = 0, so_max2 = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
    	if(a[i] >= so_max1){
    		so_max2 = so_max1;
    		so_max1 = a[i];
		}
		else if(a[i] > so_max2){
			so_max2 = a[i];
		}
    }
    cout << so_max1 << " " << so_max2;
}