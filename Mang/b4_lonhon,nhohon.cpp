#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int &y: a) cin >> y;
    int x; cin >> x;
    int lon = 0, nho = 0;
    for(int y : a){
        if(y < x) nho++;
        else lon++;
    }
    cout << nho << endl << lon;
}