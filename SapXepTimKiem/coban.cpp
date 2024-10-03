#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++);
#define FORD(i, a, b) for(int i = a; i > b; i--);


//comparator : comparison function
// ham doi vi tri
//xd muon sx mang ntn? (tang dan -> x <= y : true)
// ham sort
int tongcs(int n){
    int ans = 0;
    while(n){
        ans += n %10;
        n /= 10;
    }
    return ans;
}
bool cmp(int x, int y){ // x, y la 1 cap so trong mang
    if(tongcs(x) != tongcs(y))
    return tongcs(x) < tongcs(y);
    else return x < y;
}

int main(){
    faster();
    int a[] = {1234124, 432523, 65367, 34543, 23432, 3245, 5232,423};
    int n = 8;
    /*
    vector<int> b = {7, 8, 1, 2, 6, 4, 5, 3};
    // sort mang
    //sort(a + x, a + y + 1) x -> y
    sort(a, a + n, greater<int>()); // contro tro den pt dau va pt cuoi // greater: sx giảm dần
    //sort vector
    //sort(a.begin() + x, a.begin() + y + 1) x -> y
    sort(b.begin(), b.end()); // 0 -> n - 1
    */
    sort(a, a + n, cmp); // cmp : logic bo sung de sap xep
    for(int x : a) cout << x << " ";
    return 0;
}

