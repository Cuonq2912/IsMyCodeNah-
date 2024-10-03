#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    //1
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //2
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //3
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j < n + 1 - i){
                cout << " ";
            } else cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //4
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j < i){
                cout << " ";
            } else cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //5
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i == 1 || i == n || j == 1 || j == i){
                cout << "*";
            } else cout << " ";
        } cout << endl;
    }
    return 0;
}