#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,  demchan = 0, demle = 0;; 
    while(cin >> x){
        if(x % 2 == 0) demchan++;
        else demle++;
    }
    if(demchan > demle) cout << "CHAN\n";
    else if(demchan < demle) cout << "LE\n";
    else cout << "CHANLE\n";
    return 0;
}