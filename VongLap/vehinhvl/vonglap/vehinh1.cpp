#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    //1
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "*";
        }
    }
    cout << endl;
    //2
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n){
                cout << "*";
            }
        }
    } cout << endl;
    //3
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == 1){
                cout << "*";
            }else{
                cout << "#";
            }
        }
    } cout << endl;
    //4
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n){
                cout << i;
            }
        }
    } cout << endl;
    return 0;
}
