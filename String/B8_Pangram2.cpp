#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define Faster() ios_base::sync_with_stdio(); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pii pair<int, int>
#define sz size


int main(){
    Faster();
    int t; cin >> t;
    int step = 0;
    set<char> se;
    cin.ignore();
    while(t--){
        string s; int k;
        getline(cin, s);
        cin >> k;
        if(s.length() < 26){
            cout << 0 << el;
            continue; // chuyen sang vong while moi
        }
        for(char x : s){
            se.insert(x);
        }
        if(k >= 26 - se.sz()) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}