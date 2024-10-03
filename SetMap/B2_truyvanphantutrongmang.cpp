#include<bits/stdc++.h>
using namespace std;


#define FOR(i, a, b) for(int i = a; i < b; i++)
#define f first
#define s second

void nhap(int &n){
	cout << "Nhap so luong pt: ";
	cin >> n;
}
void nhapmang(int *&a, int n){
	FOR(i, 0, n){
		cin >> *(a + i);
	}
}
int main(){
	int n;
	int *a;
	nhap(n);
	nhapmang(a, n);
	int truyvan; cout << "Truy van = ";
	cin >> truyvan;
	set<int> se;
	for(int i = 0; i < n; i++){
		se.insert(a[i]);
	}
	while(truyvan--){
		long x;
		cin >> x;
		if(se.find(x)!= se.end()){
			cout << "YES\n";
		}else cout << "NO\n";
	}
	return 0;
}
