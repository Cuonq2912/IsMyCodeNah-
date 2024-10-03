#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define f first
#define s second


int main(){
	int n;
    cin >> n;
    set<int> se;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        se.insert(x);
    }
    int q;
    cin >> q;
    while(q--){
        int tt, x;
        cin >> tt >> x;
        if(tt == 1){
            se.insert(x);
        }else if(tt == 2){
            if(se.count(x)){
                se.erase(x);
            }
        }else if(tt == 3){
            auto it = se.begin();
            cout << *it << endl;
        }else{
            auto it = se.rbegin();
            cout << *it << endl;
        }
    }


    return 0;
}