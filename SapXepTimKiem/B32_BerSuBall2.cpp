#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define FOR(i, a, b) for(int i = a; i < b; i++)


int main(){
	faster();
	int n, m;
    cin >> n >> m;
    int a[n], b[m];
    FOR(i, 0, n) cin >> a[i];
    FOR(j, 0, m) cin >> b[j];
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, cnt = 0;
    while(i < n && j < m){
        if(abs(a[i] - b[j]) <= 1){
            cnt++;
            i++;
            j++;
        }
        else{
            if(a[i] < b[j]) i++;
            else j++;
        }
    }
    cout << cnt << el;
	return 0;
}