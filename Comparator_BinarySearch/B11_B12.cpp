#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(a, b, i) for(int i = 0; i < n; i++)
#define FORD(a, b, i) for(int i = n; i > 0; i--)
#define f first
#define s second
// x co xuat hien hay ko?
bool bs(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] == x) return true;
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return false;
}

//tìm kiếm nhị phân(mảng đã được sx tăng dần)
//binary_search(a, a + n, x)
//binary_search(a.begin(), a.end(), x)
//binary_search(a + x, a + y + 1, X)
//binary_search(a.begin() + x, a.begin() + y + 1, X)

// tim vitri dau tien
int FirstPos(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] == x){
            res = m;
            r = m - 1; // tim ben trai xem con x ko
        }
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return res;
}
// tim vi tri cuoi cung
int LastPos(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] == x){
            res = m;
            l = m + 1; // tim ben phai xem con x ko
        }
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return res;
}

int main(){
    faster();
    int x; cin >> x;
    int a[7] = {1, 2, 3, 3, 3, 4, 6};
    auto it = lower_bound(a, a + 7, 8);
    if(it == a + 7){
        cout << "NOT FOUND\n";
    }  
    else{
        cout << *it << el;
    }
    cout << (it - a) << el;
    cout << LastPos(a, 7, 3);
    cout << FirstPos(a, 7, 3);
    auto it = lower_bound(a, a + 7, x); // vi tri dau tien lon hon hoac bang x
    //...
    auto it = upper_bound(a, a + 7, x); // ............... lon hon x
    return 0;
}