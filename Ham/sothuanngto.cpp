#include<iostream>
#include<math.h>
using namespace std;

bool primecheck(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    } return 1;
}
bool csnt(int n){
    int tong = 0;
    while(n){
        int r = n % 10;
        tong += r;
        if(r != 3 || r != 5 || r != 7 || r != 2){
            return 0;
        }
        n /= 10;
    }
    return primecheck(tong);
}

int main(){
    int a, b;
    int dem = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(csnt(i) && primecheck(i)){
            ++dem;
        }
    }
    cout << dem << endl;
}
