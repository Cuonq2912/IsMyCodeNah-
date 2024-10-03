#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int init;
        if(i % 2 == 1){
            init = 64 + i;
        }
        else{
            init = 96 + i;
        }
        for(int j = 1; j <= n; j++){
            cout << (char)init;
            ++init;
        }
        cout << endl;
    }

    return 0;
}
