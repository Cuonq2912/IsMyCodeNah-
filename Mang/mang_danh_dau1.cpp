#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt[1000001]; //0 0 0 0 0 0 0...// la mang danh dau

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    int dem = 0;
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        cnt[a[i]] = 1;
    }
    for(int i = 0; i < 1000000; i++){
        if(cnt[i]){
            dem++;
        }
    }
    cout << dem << endl;
}
// ko ap dung vs mang co so am
// khai bao mang du lon(du bao duoc cac gia tri ban dau)
// tuc la neu mang A co phan tu co gia tri = 1000 thi mang B phai co it nhat 1001 phan tu