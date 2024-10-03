// s? d?ng bit manipulation d? xác d?nh dia c?n di chuy?n và tháp mà dia du?c di chuy?n t? và d?n trong m?i bu?c.
#include <iostream> 

using namespace std;


    

int main() {
    int n; 
    cin >> n;
    
    for (int i = 1; i < (1 << n); i++) {
        //1 << n là d?ch bit c?a s? 1 sang trái n l?n. 
        //Khi d?ch bit c?a s? 1 sang trái n l?n, ta s? nhân s? 1 v?i 2^n l?n. 
        //Vì v?y, 1 << n tuong duong v?i phép toán 2^n(s? lu?ng bu?c di chuy?n t?i thi?u d? di chuy?n n dia t? m?t tháp sang tháp khác theo quy t?c c?a bài toán là 2^n - 1).

        int disc = __builtin_ctz(i) + 1; // disc chính là dia c?n di chuy?n trong m?i bu?c. Ðia c?n di chuy?n luôn là dia nh? nh?t chua du?c di chuy?n, t?c là dia có s? th? t? nh? nh?t trong bi?u di?n nh? phân c?a i
        //hàm __builtin_ctz(i) bên du?i s? tr? v? s? lu?ng bit 0 liên ti?p t? ph?i sang trái trong bi?u di?n nh? phân c?a i
        //Ví d?, n?u i = 4 (bi?u di?n nh? phân là 100), thì __builtin_ctz(i) s? tr? v? 2 vì có hai bit 0 liên ti?p t? ph?i sang trái.

        int from = ((i & i - 1) % 3) + 1; // Xác d?nh tháp mà dia du?c di chuy?n t?
        //i & i - 1 là phép toán bit AND gi?a i và i - 1. K?t qu? c?a phép toán này s? lo?i b? bit 1 cu?i cùng trong bi?u di?n nh? phân c?a i.
        //Phép chia l?y ph?n du cho 3 (% 3) du?c s? d?ng d? xác d?nh tháp mà dia du?c di chuy?n t?, v?i k?t qu? thu?c {0, 1, 2}. Do dó, c?n c?ng thêm 1 d? k?t qu? thu?c {1, 2, 3}, tuong ?ng v?i 3 tháp T1, T2, T3.
        
        int to = (((i | i - 1) + 1) % 3) + 1; // Xác d?nh tháp mà dia du?c di chuy?n d?n
        //i | i - 1 là phép toán bit OR gi?a i và i - 1. K?t qu? c?a phép toán này s? d?t bit 1 vào v? trí bit 0 cu?i cùng trong bi?u di?n nh? phân c?a i.
        //Tuong t? nhu trên, phép chia l?y ph?n du cho 3 (% 3) và c?ng thêm 1 du?c s? d?ng d? xác d?nh tháp mà dia du?c di chuy?n d?n.
        cout << "MOVE T" << from << " T" << to << "\n";
    }
    return 0;
}

