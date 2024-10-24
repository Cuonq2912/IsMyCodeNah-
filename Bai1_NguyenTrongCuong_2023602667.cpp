#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define MAX 10

struct HangHoa{
	char MaHang[10];
	char TenHang[20];
	char DVTinh[20];
	ll donGia;
	int soLuong;
	ll tTien(){
		return donGia * soLuong;
	}
	ll thanhTien = tTien();
};

struct List {
	int count;
	HangHoa e[MAX];
};
void Initialize(List &L){
	L.count = -1;
}
int Full(List L){
	return L.count = MAX- 1;
}
int Empty(List L){
	return L.count = -1;
}

int Add(List &L, HangHoa X){
	if(Full(L)){
		return 0;
	}
	else{
		L.count++;
		L.e[L.count] = X;
		return 1;
	}
}
void nhaphh(HangHoa &hh){
	cout << "nhap ma hang ";
	fflush(stdin); gets(hh.MaHang);
	cout << "nhap ten hang ";
	fflush(stdin); gets(hh.TenHang);
	cout << "Nhap don vi tinh ";
	cin >> hh.DVTinh;
	cout << "Nhap don gia ";
	cin >> hh.donGia;
	cout << "Nhap so luong ";
	cin >> hh.soLuong;
//	cout << "Nhap thanh tien";
//	cin >> hh.thanhTien;
}

void nhapds(List &L){
	HangHoa X; L.count =-1;
	Initialize(L);
	do{
		cout << "Nhap hh thu " << L.count + 1 << "\n";
		nhaphh(X);
		L.count++;
		L.e[L.count] = X;
	}while(L.count < 5);
}

void hienthids(List L){
	cout << setw(5) << "STT";
	cout << setw(12) << "Ma Hang";
	cout << setw(12) << "Ten Hang";
	cout << setw(12) << "DV Tinh";
	cout << setw(12) << "Don Gia";
	cout << setw(16) << "SoLuong";
	cout << setw(20) << "ThanhTien";
	for(int i = 0; i < L.count; i++){
		cout << setw(5) << (i + 1);
		cout << setw(12) << L.e[i].MaHang;
		cout << setw(12) << L.e[i].TenHang;
		cout << setw(12) << L.e[i].DVTinh;
		cout << setw(12) << L.e[i].donGia;
		cout << setw(16) << L.e[i].soLuong;
		cout << setw(20) << L.e[i].thanhTien;
	}
	
}
void xoa_pt_thu_3(List &L){
	if(Empty(L)){
		cout << "Danh sach rong";
		return;
	}
	else{
		for(int i = 3; i < L.count; i++){
			L.e[i - 1] = L.e[i];
		}
	}
	L.count--;
}

int chen(List &L, int k, HangHoa X){
	if(k < L.count + 1 && k > 0 && !Full(L)){
		for(int i = L.count; i >= k - 1; i--){
			L.e[i + 1] = L.e[i];
		}
		L.e[k] = X;
		return true;
	}
	return false;
}

int chen_vao_vitri_dau(List &L){
	HangHoa hh;
	int i;
	if(!Full(L) && k <= L.count + 1 && k >= 1){
		cout << "Nhap hang hoa can bo sung";
		nhaphh(hh);
		chen(L, 1, X);
		return 1;
	}
	return 0;
}
//void sapxep(vector &v){
//	for(int i = 0; i < v.count - 1; i++){
//		for(int j = i + 1; j < v.count; j++){
//			if(v.e[j].thanhTien < v.e[j + 1].thanhTien){
//				HangHoa tmp = v.e[j];
//				v.e[j] = v.e[j + 1];
//				v.e[j + 1] = tmp;
//			}
//		}
//	}
//}
int main(){
	List L;
	nhapds(L);
	cout << "Danh sach vua nhap la\n";
	hienthids(L);
	cout << "Xoa phan tu thu 3 trong ds\n";
	xoa_pt_thu_3(L);
	hienthids(L);
	if(chen_vao_vitri_dau(L)){
		cout << "Danh sach sau khi chen vao vi tri dau la\n";
		hienthids(L);
	}
	else{
		cout << "Vi tri chen khong thich hop"
	}
	
}