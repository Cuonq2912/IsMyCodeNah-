#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int d = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << d << " ";
            d++;
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        cout << i << " ";
        for(int j = 1; j < n; j++){
            cout << i + j << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j >= 6 - i){
                cout << i;
            } else cout << "~";
        }
        cout << endl;
    }
    cout << endl;
    //4
    
    for(int i = 1; i <= n; i++){
        int val = i, k = n -1;
        for(int j = 1; j <= i; j++){
            cout << val << " ";
            val = val + k;
            k--;
        }
        cout << endl;
    }
   
    
    return 0;
}