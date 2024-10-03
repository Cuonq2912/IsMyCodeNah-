#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++);
#define FORD(i, a, b) for(int i = a; i > b; i--);

int tongcs(int n){
    int ans = 0;
    while(n){
        ans += n %10;
        n /= 10;
    }
    return ans;
}
bool cmp(int x, int y){ // x, y la 1 cap so trong mang
    if(tongcs(x) != tongcs(y))
    return tongcs(x) < tongcs(y);
    else return x < y;
}

int main(){
    faster();
    int a[] = {1234124, 432523, 65367, 34543, 23432, 3245, 5232,423};
    int n = 8;
    stable_sort(a, a + n, cmp); // ai xuat hien truoc -> dung truoc
    for(int &x : a){
        cout << x << " ";
    }
    return 0;
}