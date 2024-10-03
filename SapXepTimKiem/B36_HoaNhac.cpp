#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define FOR(i, a, b) for(int i = a; i < b; i++)


int main(){
	faster();
	int n, m; // vé vs khách hàng
    cin >> n >> m;
    multiset<int> se;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        se.insert(x);
    }
    
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        if(se.empty() || *se.begin() > x){
            cout << "-1\n";
            continue;
        }
        auto it = se.upper_bound(x);// nho nhat lon hon x
        it--;//nho hon hoac bang x
        cout << *it << el;
        se.erase(it);
    }
    

	return 0;
}