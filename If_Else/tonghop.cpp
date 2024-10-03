#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	//1
	if(n % 2 == 0){
		cout << "YES\n";
	} else cout << "NO\n";
	//2
	if(n % 3 == 0 && n % 5 == 0){
		cout << "YES\n";
	} else cout << "NO\n";
	//3
	if(n % 3 == 0 && n % 7 != 0){
		cout << "YES\n";
	} else cout << "NO\n";
	//4
	if(n % 3 == 0 || n % 7 == 0){
		cout << "YES\n";
	} else cout << "NO\n";
	//5
	if(n > 30 && n < 50){
		cout << "YES\n";
	} else cout << "NO\n";
	//6
	if(n >= 30 &&(n % 2 == 0 || n % 3 == 0 || n % 5 ==0)){
		cout << "YES\n";
	} else cout << "NO\n";
	//7
	int x = n % 100;
    for(int i = 1; i <= sqrt(x); i++){
        if(x % i == 0){
            cout << "NO\n";
        }
    }
    cout << "YES\n";
	//8
	if(n <= 100 && n % 23 == 0){
		cout << "YES\n";
	} else cout << "NO\n";
	//9
	if(n < 10 || n >20){
		cout << "YES\n";
	} else cout << "NO\n";
	//10
	int y = n % 10;
	if(y % 3 == 0){
		cout << "YES\n";
	} else cout << "NO\n";
	return 0;
}