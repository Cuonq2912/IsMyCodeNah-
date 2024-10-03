#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; int dem = 0;
    cin >> n;
    dem += n / 100;
    n %= 100;
    dem += n / 20;
    n %= 20;
    dem += n / 10;
    n %= 10;
    dem += n / 5;
    n %= 5;
    dem += n / 1;
    cout << dem << endl;
}