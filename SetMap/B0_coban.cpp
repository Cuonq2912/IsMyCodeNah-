#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(a, b, i) for(int i = 0; i < n; i++)
#define FORD(a, b, i) for(int i = n; i > 0; i--)
#define f first
#define s second

// set: khong luu trung nhau
// set: co thu tu tang dan (tu sap xep)


int main(){
    faster();
    int n; cin >> n;
    int a[n];
    set<int> se;  // {}
    se.insert(3); // {3}        O(logN)
    se.insert(4); // {3, 4}
    se.insert(5); // {3, 4, 5}
    se.insert(5); // {3, 4, 5}
    se.insert(6); // {3, 4, 5, 6}
    se.insert(2); // {2, 3, 4, 5, 6}

    for(int x : se){
        cout << x << " ";
    }for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(a[i]); // O(NlogN)
    }
    cout << se.size() << endl;
    return 0;
}

/*
duyet set
for(set<int> :: iterator it = se.begin; it != se.end(); i++){
    cout << *it << " ";
}
*/