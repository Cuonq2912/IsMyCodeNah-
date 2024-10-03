#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double a, b, c;
    cin >> a >> b >> c;
    if(a == 0){
        if(b == 0){
            cout << "Phuong trinh vo nghiem !\n";
        }else{
            cout << "Phuong trinh co nghiem duy nhat x = " << -c/a;
        }
    }else{
        if(b == 0){
            cout << "Phuong trinh vo nghiem !\n";
        }else{
            double del = b*b - 4*a*c;
            if(del < 0){
                 cout << "Phuong trinh vo nghiem !\n";
            }else if(del == 0){
                cout << "Phuong trinh co cap nghiem kep x1 = x2 = " << -b/(2*a) << endl;
            }else{
                double x1, x2;
                x1 = (-b +sqrt(del))/(2*a);
                x2 = (-b -sqrt(del))/(2*a);
                cout << "Phuong trinh co 2 nghiem phan biet x1 = " << x1 << "; " << "x2 = " << x2;

            }
        }
    }
    return 0;
}