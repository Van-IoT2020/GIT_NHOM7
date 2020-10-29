#include <iostream>
using namespace std;

int tongBT(int &a, int &b);
int hieuBT(int &a, int &b);
int tichBT(int &a, int &b);
float thuongBT(int &a, int &b);

int tinhChuViHinhVuong(int &a);
int tinhDienTichHinhVuong(int &a);

int tongBT(int &a, int &b) {
	return a + b;
}

int hieuBT(int &a, int &b) {
	return a - b;
}

int tichBT(int &a, int &b){
	return a*b;
}

float thuongBT(int &a, int &b){
	return (float)a/b;
}

int tinhChuViHinhVuong(int &a) {
	return a * 4;
}

int tinhDienTichHinhVuong(int &a) {
	return a * a;
}


int main()
{
	int a, b ;

	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "\nNhap vao a:";
	cin>> a;
	cout << "\nNhap vao b:";
	cin>> b;

	int tong = tongBT(a, b);
	cout << "\nTong a*b =" << tong;

	int hieu = hieuBT(a, b);
	cout << "\nHieu a-b =" << hieu;

	int tich = tichBT(a, b);
	cout << "\nTich a*b =" << tich;
	
	float thuong = thuongBT(a, b);
	cout << "\nThuong a/b =" << thuong;

	cout << "\n===========================================";
	int hv;
	cout << "\nNhap vao canh cua hinh vuong:";
	cin >> hv;
	cout << "\nDien tich hinh vuong = "<< tinhDienTichHinhVuong(hv);

	cout << "\nChu vi hinh vuong = " << tinhChuViHinhVuong(hv);
	
	int r;
	cout << "\nNhap vao ban kinh r:";
	cin>> r;
	cout << "\nChuvi  =" << 2*r*3.14;
	cout << "\nDientich  =" << r*r*3.14;
	system("pause");
	return 0;
}