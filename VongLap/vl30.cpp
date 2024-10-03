#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int st = n, en = n;
    for(int i = 1; i <= n; i++){
        for(int i = 1; i < st; i++) cout << "  ";
        for(int i = st; i <= en; i++) cout << "* ";
        st--; en++;
        cout << endl;
    }
    return 0;
}
/*
i =1; i = 5 -> 5
i = 2; j = 4 6
3 3 7
4 3 8
5 1 9
*/