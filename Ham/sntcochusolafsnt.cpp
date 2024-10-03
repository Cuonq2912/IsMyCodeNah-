#include<iostream>
#include<math.h>

using namespace std;

bool primecheck(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    } return 1;
}
bool chusoisprime(int n){
    while(n){
        int r = n % 10;
        if(r != 2 && r != 3 && r != 5 && r != 7){
            return 0;
        }
        n /= 10;
    }
    return 1;
}



int main(){
    int a, b;
    cin >> a >> b;
    int dem = 0;
    for(int i = a;i <= b; i++){
        if(chusoisprime(i) && primecheck(i)){
            ++dem;
        }
    }
    cout << dem;
}