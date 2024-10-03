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
        if(primecheck(n % 10)){
            n /= 10;
        }
    }
    return n == 0;
}



int main(){
    int a, b;
    cin >> a >> b;
    int dem = 0;
    for(int i = a;i <= b; i++){
        if(primecheck(i) && chusoisprime(i)){
            ++dem;
        }
    }
}