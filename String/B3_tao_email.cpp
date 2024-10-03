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
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; //khai bao chuoi ktu
        getline(cin, s); //nhapchuoiktu
        FOR(i, 0, s.length()){
            s[i] = tolower(s[i]);//chuyenveinthuong
        }
        vector<string> v;

        stringstream ss(s);//tach cac tu
        string tmp;
        while(ss >> tmp) v.pb(tmp);//day vao vector
        cout << v[v.sz() - 1];//in ra ten
        FOR(i, 0, v.sz() - 1){
            cout << v[i][0];//in chu cai ddau tien
        }
        cout << "@gmail.com";
        cout << el;
    }
    return 0;
}