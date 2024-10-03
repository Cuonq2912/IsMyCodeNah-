#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int chan = 0, le = 0, sumchan = 0, sumle = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            ++chan;
            sumchan += a[i];
        }else{
            ++le;
            sumle += a[i];
        }
    }
    cout << "so so chan: " << chan << endl;
    cout << "so so le: " << le << endl;
    cout << "tong chan: " << sumchan << endl  << "tong le: " << sumle;
}