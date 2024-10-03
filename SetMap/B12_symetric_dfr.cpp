#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define f first
#define s second


int main(){
	int n, m;
    cin >> n >> m; 
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x] = 1;
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto it = mp.begin(); it != mp.end(); ++it){
        if(it->s == 1){
            cout << it->f << " ";
        }
    }
    return 0;
}