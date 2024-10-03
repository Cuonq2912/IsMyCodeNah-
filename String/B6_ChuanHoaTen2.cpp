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

void viethoa(string &s){
    FOR(i, 0, s.length()){
        s[i] = toupper(s[i]);
    }
}
void chuanhoa(string &s){

}
int main(){
    Faster();
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while(ss >> tmp){
            v.pb(tmp);
        }
        chuanhoa(v[v.sz() - 1]); // chu cai dau tien 
        cout << v[v.sz() - 1] << ", ";
        FOR(i, 0, v.sz() - 1){
            chuanhoa(v[i]);
            cout << v[i];
            if(i != v.sz()- 2) cout << ' '; //khong in dau cach cuoi
        }
    }
    cout << el;
    return 0;
}