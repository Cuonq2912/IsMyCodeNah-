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
    string s;
    getline(cin, s);
    string word;
    cin >> word;
    stringstream ss(s);
    string token;
    vector<string> v;
    while(ss >> token){ // trich xuat du lieu
        if(token != word){
            v.pb(token);
        }
    }
    FOR(i, 0, v.sz()){
        cout << v[i];
        if(i != v.sz() - 1){
            cout << " ";
        }
    }
    return 0;
}