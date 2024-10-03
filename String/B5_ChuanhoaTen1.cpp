#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define Faster() ios_base::sync_with_stdio(); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define fe first
#define se second
#define pb push_back
#define pob pop_back
#define pii pair<int, int>
#define sz size

void viethoa(string &s){
     FOR(i, 0, s.length()){
          s[i] = toupper(s[i]);
        }
}
void chuanhoa(string &s){
    s[0] = toupper(s[0]);
    FOR(i, 1, s.length()){
        s[i] = tolower(s[i]);
    }
}

int main(){
    Faster();
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp) v.pb(tmp);
        FOR(i, 0, v.sz() - 1){
            chuanhoa(v[i]);
            cout << v[i];
            if(i == v.sz() - 2) cout << ", ";
            else cout << " ";
        }
        viethoa(v[v.sz() - 1]);
        cout << v[v.sz() - 1] << el;
    }

    return 0;
}