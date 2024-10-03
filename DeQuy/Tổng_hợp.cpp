#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//1 in dao nguoc
void rev(ll n){
	if(n){
		cout << n % 10;
		rev(n/10);
	}
}
//2 dem so luong chu so
int cnt(ll n){
	int ans = 1;
	if(n < 10) return ans;
	else return ans + cnt(n / 10);
}
//3 find_max_digit
int max_dgt(ll n){
	int gt = 0;
	if(n < 10) return n;
	else gt = max_dgt(n/10);
	return n%10 > gt ? n%10 : gt;
}
//4 tinh tong chu so cua n
int sumchuso(ll n){
	int sum = n % 10;
	if(n < 10) return n;
	else return sum + sumchuso(n/10);
}
//5 tong chu so chan 
int sum_even(ll n){
	if(n < 10){
		if(n % 2 == 0) return n;
		else return 0;
	}else{
		if(n % 2 == 0)return n%10 + sum_even(n/10);
		else return sum_even(n/10);	
	}
}
//6 tong tu nhien
ll sum(ll n){
	if(n == 1) return 1;
	else return n + sum(n - 1);
}
//7 tong binh phuong
ll sum_square(ll n){
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else return n*n + sum_square(n - 1);
}
//8 tong lien tiep
double sum_phanso(ll n){
	if(n == 1) return 1;
	else return 1.00/n + sum_phanso(n - 1);
}

int main(){
	ll n;
	cin >> n;
	rev(n);
	cout << "\n" << cnt(n) << "\n";
	cout << max_dgt(n) << "\n";
	cout << sumchuso(n) << "\n";
	cout << sum_even(n) << "\n";
	cout << sum(n) << "\n";
	cout << sum_square(n) << "\n";
	cout << sum_phanso(n) << "\n";
	
	return 0;
}
