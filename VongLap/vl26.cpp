#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int dem = 0;
    if(n == 1){
        cout  << "-1";
    }else{
        for(int i = 1; i <= n / 2; i++){
                dem++;
        }
        cout << dem << endl;
        if(n % 2 == 0){
            for(int i = 1; i <= n / 2; i++){
                    cout << '2' << ' '; 
            }
        }else{
            for(int i = 2; i <= n / 2; i++){
                    cout << '2' << ' ';
            } cout << '3';
        }
    }
    return 0;
}