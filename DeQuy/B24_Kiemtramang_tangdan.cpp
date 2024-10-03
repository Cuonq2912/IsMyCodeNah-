#include<bits/stdc++.h>
using namespace std;

#define long long ll
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++);
#define FORD(i, a, b) for(int i = a; i > b; i--);

int checkraise(int a[], int n, int i){
    if(i == n) return 1;
    if(a[i] <= a[i-1]) return 0;
    else return checkraise(a, n, i+1);
}
// int check(int a[], int n, int i, int maxl){
//  if(i == n) return 1;
//  if(a[i <= maxl]) return 0;
//  int newmaxl v = a[i];
//  return check(a, n, i+1, newmaxl);
// }
int main(){
    faster();
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(checkraise(a, n, 1)){
        cout << "YES\n";
    }else cout << "NO\n";
    return 0;
}