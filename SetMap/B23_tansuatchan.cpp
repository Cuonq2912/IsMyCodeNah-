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
    switch(t){
        case 1:
            se.insert(x);
            break;
        case 2:
            auto it = se.find(x);
            se.erase(it);
            break;
        case 3:
            auto it = se.rbegin();
            if(x == *it){
                cout << "-1\n";
            }
            else{
                auto it = lower_bound(se.begin(), se.end(), x);
                se.erase(it);
            }
            break;
        case 4:
            auto it = se.begin();
            if(x == *it){
                cout << "-1\n";
            }
            else{
                auto it = upper_bound(se.begin(), se.end(), x);
                se.erase(it);
            }
            break;

    }
    return 0;
}
