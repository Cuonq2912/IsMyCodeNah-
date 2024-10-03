#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++);
#define FORD(i, a, b) for(int i = a; i > b; i--);
#define f first
#define s second
//nhieu con tro tro vao 1 bien được
// con tro chi luu dia chi

int main(){
    faster();
    int n = 100;
    cout << " dia chi la " << &n;
    int *ptr; // the hien ptr la con tro(luc khai bao)
    ptr = &n; // gan dia chi cua n cho contro ptr
    cout << *ptr; /// = n = 100
    *ptr = 1000; // n = 1000 (giai tham chieu)
    int **ptr2 = &ptr; //contro level 2
    cout << *ptr2;// dia tri con tro tro toi gtri
    cout << **ptr2; //gtri
    return 0;
}

// pass by reference
void add2(int *n){
    *n += 100; // giai tham chieu
}
int main(){
    int a = 200;
    add2(&a);
    cout << a << endl;
}


// con tro mang
int main(){
    int a[] = {10, 20, 30, 40, 50};
    cout << a << endl; // dia chi cua 10
    for(int i = 0; i < 5; i++){
        cout << &a[i] << " "; // dia chi cua cac pt trong mang
    }
    cout << endl;
    cout << (a + 3) << endl; // địa chỉ của 40 = a[3]
    // ++a; // loi
    for(int i = 0; i < 5; i++){
        cout << *(a + i) << " "; // a[i]
    }
    cout << endl;
    int *ptr = &a[1]; // dia chi cua a[1]
    ++ptr;
    cout << *ptr << endl; // a[2]
}