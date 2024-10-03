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
	int n, x; // so tre, t_luong_max
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];// trong luong cua tre
    }
    sort(a, a + n);
    int t = 0; // sothuyen
    int l = 0, r = n - 1;
    for(int i = 0; i < n; i++){
        while(a[i] + a[i + 1] < x){
            t++;
            i += 2;
        }
    }
	return 0;
}