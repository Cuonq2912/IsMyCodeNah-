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
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int val = a[0], max_freq = 1, cur_freq = 1;
    FOR(i, 1, n){
        if(a[i] == a[i - 1]){
            cur_freq++;
        }else cur_freq = 1;
        if(cur_freq > max_freq){
            max_freq = cur_freq;
            val = a[i];
        }
    }
    cout << val << " " << max_freq;
    return 0;
}