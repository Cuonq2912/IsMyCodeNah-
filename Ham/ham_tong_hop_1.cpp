#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//1
bool prime(ll n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
//2
int sum(ll n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
//3
int evensum(ll n){
    int evensum = 0;
    while(n){
        if(n % 2 == 0){
            evensum += (n%10);
        }
        n /= 10;        
    }
    return evensum;
}
//4
int sumprime(ll n){
    int sumprime = 0;
    while(n){
        int chuso = n % 10;
        if(prime(chuso)){
            sumprime += chuso;
        }
        n /= 10;
    }
    return sumprime;
}
//5
int contrast(ll n){
    int tmp = 0;
    while(n){
        tmp = tmp*10 + n % 10;
        n /= 10;
    }
    return tmp;
}
//6
int divisorprime(ll n){
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            dem++;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1){
        dem++;
    }
    return dem;
}
//7
int maxdivisorprime(ll n){
    int tmp = 0;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            tmp = i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1){
        tmp = n;
    }
    return tmp;
}
//8
bool exist6(ll n){
    while(n){
        if(n%10 == 6){
            return 1;
        }
        n /= 10;
    }
    return 0;
}
//9
bool divisible8(ll n){
    return sum(n) % 8 == 0;
    return 0;
}
//10
ll factorial(ll n){
    ll factor = 1;
    for(int i = 1; i <= n; i++){
        factor *= i;
    }
    return factor;
}
ll sumfactorial(ll n){
    ll sum = 0;
    while(n){
        sum += factorial(n % 10);
        n /= 10;
    }
    return sum;
}
//11
bool make1digit(ll n){
    int t = n % 10;
    while(n){
        if((n % 10) != t){
            return 0;
        }
        n /= 10;
    }
    return 1;
}
//12
bool lastmax(ll n){
    int t = n % 10;
    while(n){
        if((n % 10 > t)){
            return 0;
        }
        n /= 10;
    }
    return 1;
}
//13
int tongluythuamu(ll n){
    int sumluythua = 0;
    while(n){
        int sum_n = sum(n);
        sumluythua += pow(double(n % 10), sum_n);
        n /= 10;
    }
    return sumluythua;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    cout << prime(n) << endl;
    cout << sum(n) << endl;
    cout << evensum(n) << endl;
    cout << sumprime(n) << endl;
    cout << contrast(n) << endl;
    cout << divisorprime(n) << endl;
    cout << maxdivisorprime(n) << endl;
    cout << exist6(n) << endl;
    cout << divisible8(n) << endl;
    cout << sumfactorial(n) << endl;
    cout << make1digit(n) << endl;
    cout << lastmax(n) << endl;
    cout << tongluythuamu(n) << endl;
}