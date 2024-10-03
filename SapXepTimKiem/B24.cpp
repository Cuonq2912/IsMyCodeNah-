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
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, cnt = 0;
    while(i < n && j < m){
        if(abs(a[i] - a[j]) <= k){
            cnt++;
            i++;
            j++;
        }else{
            if(a[i] > b[j]) j++;
            else i++;
        }
    }
    cout << cnt;
    return 0;
}