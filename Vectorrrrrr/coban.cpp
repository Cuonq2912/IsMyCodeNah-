#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define el "\n"
//push_back, emplace_back : O(1)
//pop_back: O(1)
//pham tu o chi so x: v.begin() + x
int main(){
    faster();
    auto t = 3.14;
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    auto it = v.begin();
    v.insert(v.begin() + 2, 28); //chen
    v.erase(v.begin() + 4); // xoa
    v.pop_back(); // xoa cuoi
    v.resize(10); 
    v.assign(5, 100); // vecto 5 pt = 100
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << '\n';
    cout << v.size() << "\n";

    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
    for(auto it : v){
        cout << *it.first << ' ' << *it.second << endl;
    }
    for(auto it1 = v.begin(); it1 != v.end(); ++it1){
        cout << (*it1).first << " " << (*it1).second() << endl;
    }
}