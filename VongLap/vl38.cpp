#include<bits/stdc++.h>
using namesapce std;

bool snt(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n, tong = 0, dem = 0;
    cout << "Nhap so nguyen n: ";
    for(int i = 1; i <= n; i++){
        if(snt(n)){
            tong+=i;
            dem++;
        }
    }
    cout << "Co" << dem << "snt thuoc doan tren va tong cua chung bang " << tong << endl;
    return 0;
}