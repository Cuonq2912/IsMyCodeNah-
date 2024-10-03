#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void intrai(int a[], int n, int i){
    if(i == n) return;
    cout << a[i] << " ";
    intrai(a, n, i+1);
}
void inphai(int a[], int n, int i){
    if(i == n) return;
    inphai(a, n, i +1);
    cout << a[i] << " ";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    intrai(a, n, 0); cout << "\n";
    inphai(a, n, 0); cout << "\n";
    return 0;
}