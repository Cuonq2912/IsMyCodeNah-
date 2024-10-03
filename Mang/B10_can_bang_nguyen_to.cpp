#include<bits/stdc++.h>
using namespace std;

bool PrimeCheck(int n){
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0) return 0;
    } return n > 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
	}
    for(int i = 0; i < n; i++){
        int sum1 = 0, sum2 = 0;
        for(int j = 0; j <= i - 1; j++){
            sum1 += a[j];
        }
        for(int j = i + 1; j <= n - 1; j++){
            sum2 += a[j];
        }
        if(PrimeCheck(sum1) && PrimeCheck(sum2)){
            cout << i << ' ';
        }
    }
}