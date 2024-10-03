#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fors(i, a, b) for(int i = a; i < b; i++)
#define fords(i, a, b) for(int i = a; i > b; i--)
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pii pair<int, int>
#define sz size
#define mapint map<int, int>

struct sinhVien{
    string ten;
    string lop;
    double gpa;
    void in(){
        cout << ten << ' ' << lop << ' ' << gpa << el;
    }
    void nhap(){
        getline(cin ,ten);
        getline(cin, lop);
        cin >> gpa;
    }
};
struct SinhVien{
    string ten, ns, dc;
    double gpa;
};

int main(){
    Faster();
    sinhVien s;
    s.nhap();
    s.in();

    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, )
    }
    return 0;
}