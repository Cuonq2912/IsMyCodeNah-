#include <iostream>

using namespace std;

int main () {
    int n; cin >> n;
    //1
    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    } cout << endl;
    //2
    for(int i = n; i >= 0; i--) {
        cout << i << " ";
    } cout << endl;
    //3
    for(int i = 0; i <= n; i+=2) {
        cout << i << " ";
    } cout << endl;
    //4
    for(int i =1; i <= n; i+= 2 ) {
        cout << i << " ";
    } cout << endl;
    //5
    for(int i= 0; i <= n; i += 4) {
        cout << i << " ";
    } cout << endl;
    //6 
    for(char i = 0; i < n; i++) {
        cout << (char)(i + 97) << " ";
    } cout << endl;
    //7 
    for(char i = 122 - n + 1; i <= 122; i++) {
        cout << (char)i << " ";
    } cout << endl;

    return 0;
}