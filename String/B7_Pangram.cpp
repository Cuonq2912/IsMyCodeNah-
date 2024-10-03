#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define Faster() ios_base::sync_with_stdio(); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define pii pair<int, int>
#define sz size


int main(){
    Faster();
    int t;cin >> t;
    set<char> se; // 26
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        for(char x : s){
            se.insert(x);
        }
        if(se.size() == 26) cout << "YES";
        else cout << "NO";
        cout << el;
    }
    return 0;
}