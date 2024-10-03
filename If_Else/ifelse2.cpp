#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, b, c; 
    cin >> a >> b >> c;
    int res = min({a+b+c, 2*(a+b), 2*(c+b), 2*(a+c)});
    cout << res;
    return 0;
}