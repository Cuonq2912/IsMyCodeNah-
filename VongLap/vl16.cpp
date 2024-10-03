# include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long gthua = 1;
    for(int i = 1; i <= n; i++){
        gthua *= i;
    }
    cout << gthua << endl;
    return 0;
}