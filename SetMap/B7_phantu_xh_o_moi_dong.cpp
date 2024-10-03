#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define f first
#define s second


int main(){
	int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int t;
            cin >> t;
            if(mp[t] == i - 1){
                mp[t] = i;
            }
            else{
                mp[t] = 0;
            }
        }
    }
    for(auto it : mp){
        if(it.s == n){
            cout << it.f << endl;
        }else{
            cout << "NOTFOUND\n";
        }
    }
    return 0;
}