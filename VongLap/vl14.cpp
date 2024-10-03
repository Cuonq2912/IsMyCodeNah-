#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int dem = n / 28;
    int vo = n / 28;
    while(vo >= 3){
        int res = vo / 3;
        dem += res;
        vo = vo % 3 + res;
    }
    cout << dem;
    return 0;
}