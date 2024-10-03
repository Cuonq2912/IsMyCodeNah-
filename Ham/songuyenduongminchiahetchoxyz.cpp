#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, y, z, n;
    cin >> x >> y >> z >> n;
    int ucln = __gcd(__gcd(x, y) , z);
    int bcnn = x * y / ucln * z;
    int tmp = ceil(pow(10, n -1) / bcnn);
    cout << 1ll*tmp*bcnn;

}