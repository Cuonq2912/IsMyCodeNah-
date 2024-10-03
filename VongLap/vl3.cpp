#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int dem =0;
    while(n) {
        int tmp = n % 10;
        if(tmp == 3 || tmp == 2 || tmp == 5 || tmp == 7 ){
            dem++;
        }
         n /= 10;
    } cout << dem << endl;
    return 0;
}