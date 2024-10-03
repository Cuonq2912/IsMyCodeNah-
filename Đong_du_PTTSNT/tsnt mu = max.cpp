#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin >> n; // Đọc số nguyên n từ bàn phím
	long long tsnt = 0; // Khởi tạo số nguyên tố nhỏ nhất có số mũ lớn nhất
	int somu = 0; // Khởi tạo số mũ lớn nhất

	// Duyệt qua tất cả các số từ 2 đến căn bậc hai của n
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){ // Nếu i là ước của n
			int cnt = 0; // Khởi tạo biến đếm số mũ của i
			while(n % i == 0){ // Trong khi i vẫn là ước của n
				cnt++; // Tăng biến đếm
				n /= i; // Chia n cho i
			}
			// Nếu số mũ của i lớn hơn số mũ lớn nhất hiện tại
			// hoặc số mũ bằng số mũ lớn nhất và i nhỏ hơn số nguyên tố nhỏ nhất hiện tại
			if(cnt > somu || (cnt = somu && i<tsnt)){
				tsnt = i; // Cập nhật số nguyên tố nhỏ nhất
				somu = cnt; // Cập nhật số mũ lớn nhất
			}
		}
	}
	// Nếu không tìm thấy số nguyên tố nào chia hết n (nghĩa là n là số nguyên tố)
	if(tsnt == 0){
			tsnt = n; // Số nguyên tố nhỏ nhất là chính n
			somu = 1; // Số mũ của n là 1
		}
		// In ra số nguyên tố nhỏ nhất và số mũ tương ứng
		cout << tsnt << ' ' << somu;
		return 0;
}
