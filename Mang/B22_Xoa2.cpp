#include<bits/stdc++.h>
using namespace std;
#define ll long long;

// nhap, xuat mang
void nhap(int a[], int &n){
    for(int i = 0; i < n; i++) cin >> a[i];
}
void xuat(int a[], int n){
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}
//tim
int tim(int a[], int n, int x){
	bool flag = 0;
    for(int vt = 0; vt < n; vt++){
        if(a[vt] == x) {
        	return vt + 1;
        	flag = 1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, k ;
    bool flag = 0;
    do{
        cin >> n >> x;
    } while((n < 1 || n > 1000) && (x < 1 || x > 1e3));
    int a[n];
    nhap(a, n);
    tim(a, n, k);
    if(flag == 0){
    	cout << " NOT FOUND!\n";
	}
    return 0;
}
