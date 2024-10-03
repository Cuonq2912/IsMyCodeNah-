// s? d?ng bit manipulation d? x�c d?nh dia c?n di chuy?n v� th�p m� dia du?c di chuy?n t? v� d?n trong m?i bu?c.
#include <iostream> 

using namespace std;


    

int main() {
    int n; 
    cin >> n;
    
    for (int i = 1; i < (1 << n); i++) {
        //1 << n l� d?ch bit c?a s? 1 sang tr�i n l?n. 
        //Khi d?ch bit c?a s? 1 sang tr�i n l?n, ta s? nh�n s? 1 v?i 2^n l?n. 
        //V� v?y, 1 << n tuong duong v?i ph�p to�n 2^n(s? lu?ng bu?c di chuy?n t?i thi?u d? di chuy?n n dia t? m?t th�p sang th�p kh�c theo quy t?c c?a b�i to�n l� 2^n - 1).

        int disc = __builtin_ctz(i) + 1; // disc ch�nh l� dia c?n di chuy?n trong m?i bu?c. �ia c?n di chuy?n lu�n l� dia nh? nh?t chua du?c di chuy?n, t?c l� dia c� s? th? t? nh? nh?t trong bi?u di?n nh? ph�n c?a i
        //h�m __builtin_ctz(i) b�n du?i s? tr? v? s? lu?ng bit 0 li�n ti?p t? ph?i sang tr�i trong bi?u di?n nh? ph�n c?a i
        //V� d?, n?u i = 4 (bi?u di?n nh? ph�n l� 100), th� __builtin_ctz(i) s? tr? v? 2 v� c� hai bit 0 li�n ti?p t? ph?i sang tr�i.

        int from = ((i & i - 1) % 3) + 1; // X�c d?nh th�p m� dia du?c di chuy?n t?
        //i & i - 1 l� ph�p to�n bit AND gi?a i v� i - 1. K?t qu? c?a ph�p to�n n�y s? lo?i b? bit 1 cu?i c�ng trong bi?u di?n nh? ph�n c?a i.
        //Ph�p chia l?y ph?n du cho 3 (% 3) du?c s? d?ng d? x�c d?nh th�p m� dia du?c di chuy?n t?, v?i k?t qu? thu?c {0, 1, 2}. Do d�, c?n c?ng th�m 1 d? k?t qu? thu?c {1, 2, 3}, tuong ?ng v?i 3 th�p T1, T2, T3.
        
        int to = (((i | i - 1) + 1) % 3) + 1; // X�c d?nh th�p m� dia du?c di chuy?n d?n
        //i | i - 1 l� ph�p to�n bit OR gi?a i v� i - 1. K?t qu? c?a ph�p to�n n�y s? d?t bit 1 v�o v? tr� bit 0 cu?i c�ng trong bi?u di?n nh? ph�n c?a i.
        //Tuong t? nhu tr�n, ph�p chia l?y ph?n du cho 3 (% 3) v� c?ng th�m 1 du?c s? d?ng d? x�c d?nh th�p m� dia du?c di chuy?n d?n.
        cout << "MOVE T" << from << " T" << to << "\n";
    }
    return 0;
}

