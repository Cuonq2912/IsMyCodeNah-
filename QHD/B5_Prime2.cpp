#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt_primes(int a, int b){
    // Tạo một mảng boolean để lưu trữ số nguyên tố
    bool is_primes[b - a + 1];
    int cnt = 0;
    for(int i = a; i <= b; i++){
        is_primes[i - a] = true;
    }
    // Đánh dấu các số không nguyên tố bằng Sàng Eratosthenes
    for(int p = a; p * p < b; p++){
        if(is_primes[p]){
            for(int i = p * p; i <= b; i += p){
                is_primes[i] = false;
            }
        }
    }
    for(int i = a; i <= b; i++){
        if(is_primes[i - a] && i > 1) cnt++;
    }
    return cnt;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << cnt_primes(a, b) << '\n';
    }
    return 0;
}
