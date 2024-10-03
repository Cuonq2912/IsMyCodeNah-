#include<bits/stdc++.h>
using namespace std;
using ll = long long;
//1
int socsochancuanla1sole(int n){
    if(n == 0) return 1;
    int dem = 0;
    while(n){
        if(n % 2 == 0){
            ++dem;
        }
        n /= 10;
    }
    return dem % 2 != 0;
}
//2
int sosochanlonhonssl(int n){
    if(n == 0) return 1;
    int demc = 0, deml = 0;
    while(n){
        if(n % 2 == 0){
            demc++;
        } else{
            deml++;
        }
        n /= 10;
    }
    return demc > deml;
}
//3
int sdaubangscuoi(int n){
    int a = n % 10;
    while(n >= 10){
        n /= 10;
    }
    return a == n;
}
//4
int tongnbang8(int n){
    int tong = 0;
    while(n){
        tong+= n % 10;
        n /= 10;
    }
    return tong == 8;
}
//5
bool checksnt(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int tongnlasnt(int n){
    int tong = 0;
    while(n){
        tong += n% 10;
        n /= 10;
    }
    return checksnt(tong);
}
//6
int sodungcanhchenh1dv(int n){
    while(n >= 10){
        if(abs(n % 10 - (n / 10) % 10) != 1)
            return 0;
        n /= 10;
    }
    return 1;
}
//7
int sodaumax(int n){
    int max_cur = n % 10;
    while(n >= 10){
        if(n % 10 > max_cur){
            max_cur = n % 10;
        }
        n /= 10;
    }
    return n > max_cur;
}
//8
bool fibocheck(int n){
    if(n == 0 || n == 1) return 1;
    int f1 = 0, f2 = 1;
    for(int i = 2; i <= 92; i++){
        long long fn = f1 + f2;
		if(fn == n)
			return true;
			f2 = f1; f1 = fn;
    }
    return false;
}
int tonglafib(int n){
    int tong =  0;
    while(n){
        tong += n % 10;
        n /= 10;
    }
    return fibocheck(tong);
}
//9
bool checkstn(int n){
    int rev = 0, tmp = n;
    while(n){
        rev = rev*10 + n % 10;
        n /= 10;
    }
    return rev == tmp;
}
int tonglastn(int n){
    int tong = 0;
    while(n){
        tong += n % 10;
        n /= 10;
    }
    return checkstn(tong);
}
//10
bool check068(int n){
    if(n == 0 || n == 6 || n == 8){
        return 1;
    }
    return 0;
}
int ham10(int n){
    while(n){
        if(check068(n % 10)){
            n /= 10;
        }
    }
    return n == 0;
}





int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << socsochancuanla1sole(n) << endl;
        cout << sosochanlonhonssl(n) << endl;
        cout << sdaubangscuoi(n) << endl;
        cout << tongnbang8(n) << endl;
        cout << tongnlasnt(n) << endl;
        cout << sodungcanhchenh1dv(n) << endl;
        cout << sodaumax(n) << endl;
        cout << fibocheck(n) << endl;
        cout << tonglastn(n) << endl;
        cout << check068(n) << endl;
        return 0;
    }
}