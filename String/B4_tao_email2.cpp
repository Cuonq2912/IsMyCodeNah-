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
    map<string, int> mp; // luu nhieu chuoi trung nhau

    while(t--){
        string s;
        getline(cin, s);
        FOR(i, 0, s.length()){
            s[i] = tolower(s[i]);
        }
        vector<string> v;
        stringstream ss(s); //tach cac tu bang dau cach
        string tmp;
        string res = "";
        while(ss >> tmp) v.pb(tmp);//trich xuat du lieu bang bien tmp
        res += v[v.sz() - 1]; //cong ten vao xau ket qua
        FOR(i, 0, v.sz() - 1){
            res +=v[i][0]; // con ki tu dau tien
        }
        if(mp[res] = 0){
            cout << res << "@gmail.com" << el;
        }else{
            cout << res << mp[res] + 1 << "@gmail.com" << el;
        }
        mp[res]++;
    }

    return 0;
}