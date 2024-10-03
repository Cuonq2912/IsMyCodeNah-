#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define f first
#define s second


int main(){
	int n; cin >> n;
    multiset<int> se;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        se.insert(x);
    }
    
    int t, x; cin >> t >> x;
    while(t--){
        if(t == 1){
            se.insert(x);
        }
        if(t == 2){
            auto it = se.find(x);
            if(it != se.end()){
                se.erase(it);
            }
        }
        if(t == 3){
            auto it = se.lower_bound(x);
            if(it != se.end()) cout << *it << " ";
            else cout << "-1\n";
        }
        if(t == 4){
            auto it = se.upper_bound(x);
            if(it != se.begin()){
                it--;
                cout << *it << endl;
            }
            else cout << "-1";
        }
    return 0;
}