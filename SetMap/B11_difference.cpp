#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define f first
#define s second


int main(){
	int n, m;
    cin >> n >> m; 
    set<int> se1, se2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se1.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        se2.insert(x);
    }
    for(auto it = se1.begin(); it != se1.end(); ++it){
        if(!se2.count(*it)){
            cout << *it << " ";
        }
    }
    return 0;
}