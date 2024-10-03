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
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, cnt = 0;
    while(i < n && j < m){
        if(a[i] <= b[j]){
            i++;
        }
        else{
            cnt++;
            cout << a[i] << " " << b[j] << el;
            i++;
            j++;
        }
    }
    cout << cnt << el;
    return 0;
}