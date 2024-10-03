#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//1 in dao nguoc
void indaonguoc(int n){
    if(n){
        cout << n % 10;
        indaonguoc(n/10);
    }
}
//2 dem so luong
int dem(int n){
    if(n < 10) return 1;
    return 1 + dem(n/10);
}
//3 tim chu so co gia tri lon nhat cua n
int find_digit_max(int n){
    int tmp = 0;
    if(n < 10) return n;
    else tmp = find_digit_max(n/10);
    return n % 10 > tmp ? n % 10 : tmp;
}
//4 tinh tong chu so cua n
int tongchuso(int n){
    if(n < 10) return n;
    return n % 10 + tongchuso(n/10);
}
//5 tong chu so chan
int tongchan(int n){
    if(n < 10){
        if(n % 2 == 0) return n;
        else return 0;
    } else {
        if(n % 2 == 0) return n%2 + tongchan(n/2);
        else return tongchan(n/2);
    }
}
//6 tong tu nhien
int tongday(int n){
	if(n == 1) return 1;
	return n + tongday(n - 1);
}
//7 tong binh phuong
int sum_pow_2(int n){
	if(n == 1) return 1;
	return n*n + sum_pow_2(n - 1);
}
//8 tong lien tiep
int sum_phan_so(int n){
	if(n == 1) return 1;
	return 1.00/n + sum_phan_so(n - 1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    indaonguoc(n); cout  << '\n';
    cout << dem(n) << "\n";
    cout << find_digit_max(n) << '\n';
    cout << tongchuso(n) << "\n";
    cout << tongchan(n) << "\n";
    cout << tongday(n) << "\n";
    cout << sum_pow_2(n) << "\n";
    cout << sum_phan_so(n) << '\n';
    return 0;
}