#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define f first
#define s second
#define pb push_back
#define Faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main(){
    Faster();
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[n];
    sort(a, a + n, greater<int>());
    int ans = 1; // a[0]
    int cung  = a[0];
    for(int i = 1; i < n; i++){
        if(cung <= 0){
            break;
        }
        else ++ans;
        cung = min(cung - 1, a[i]);
    }    
    cout << ans;

    return 0;
}