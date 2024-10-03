#include <iostream>
#include <cmath>

using namespace std;

const int MOD = 1e9 + 7;

// Hàm tính tích các số nguyên tố đến N
int product_of_primes(int N) {
    // Tạo một mảng boolean để lưu trữ số nguyên tố
    bool is_prime[N + 1];
    for (int i = 0; i <= N; i++) {
        is_prime[i] = true;
    }

    // Đánh dấu các số không nguyên tố bằng Sàng Eratosthenes
    for (int p = 2; p < sqrt(N); p++) {
        // chi chon nhung so chua bi danh dau
        if (is_prime[p]) {
            //chi duyet tu p^2 vi cac boi so truoc do da bi loai boi boi cua cac snt truoc do roi
            for (int i = p * p; i <= N; i += p) {
                is_prime[i] = false;
            }
        }
    }

    // Tính tích các số nguyên tố
    int product = 1;
    for (int p = 2; p <= N; p++) {
        if (is_prime[p]) {
            product = (product * p) % MOD;
        }
    }

    return product;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cout << product_of_primes(N) << endl;
    }
    return 0;
}