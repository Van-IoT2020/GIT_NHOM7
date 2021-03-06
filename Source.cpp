#include <iostream>
using namespace std;

int tongBT(int a, int b);
int hieuBT(int a, int b);
int tichBT(int a, int b);
float thuongBT(int a, int b);

int tinhChuViHinhVuong(int a);
int tinhDienTichHinhVuong(int a);

int tongBT(int a, int b) {
	return a + b;
}

int hieuBT(int a, int b) {
	return a - b;
}

int tichBT(int a, int b){
	return a*b;
}

float thuongBT(int a, int b){
	return (float)a/b;
}

int tinhChuViHinhVuong(int a) {
	return a * 4;
}

int tinhDienTichHinhVuong(int a) {
	return a * a;
}

int chuvihcn ( int dai,int rong)
{
	int chuvi = (dai + rong) *2; 
	return chuvi;
}
int dientichhcn (int dai,int rong)
{
	int dientich = dai*rong;
	return dientich;
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
	
	cout << "\n===================CVDThinh chu nhat========================";
	int dai, rong;
	cout << "\nNhap vao dai:";
	cin >> dai;
	cout << "\nNhap vao rong:";
	cin >> rong;
	cout << "\nchu vi hcn la:" << chuvihcn(dai, rong);
	cout << "\ndien tich hcn la:" << dientichhcn(dai, rong);

	cout << "\n===================CVDT hinh vuong========================";
	int hv;
	cout << "\nNhap vao canh cua hinh vuong:";
	cin >> hv;
	cout << "\nDien tich hinh vuong = "<< tinhDienTichHinhVuong(hv);

	cout << "\nChu vi hinh vuong = " << tinhChuViHinhVuong(hv);
	

	cout << "\n===========================CVDT hinh tron================";
	int r;
	cout << "\nNhap vao ban kinh r:";
	cin>> r;
	cout << "\nChuvi  =" << 2*r*3.14;
	cout << "\nDientich  =" << r*r*3.14;

	cout << "\n====================rand Tong=======================";
	cout << "\nRand Tong:";
	int ngaunhienT1 = rand() % 100;
	int ngaunhienT2 = rand() % 100;
	cout << "\nTong ngau nhien " << ngaunhienT1 << " + " << ngaunhienT2 << " = ?";
	int kqT;
	cout << "\nNhap vao ket qua = ";
	cin >> kqT;
	if (kqT == tongBT(ngaunhienT1, ngaunhienT2)){
		cout << "\nDung" << endl;
	}
	else {
		cout << "\nSai" << endl;
	}

	cout << "\n===================rand Hieu========================";
	cout << "\nRand Hieu:";
	int ngaunhienH1 = rand() % 100;
	int ngaunhienH2 = rand() % 100;
	cout << "\nHieu ngau nhien " << ngaunhienH1 << " - " << ngaunhienH2 << " = ?";
	int kqH;
	cout << "\nNhap vao ket qua = ";
	cin >> kqH;
	if (kqH == hieuBT(ngaunhienH1, ngaunhienH2)) {
		cout << "\nDung" << endl;
	}
	else {
		cout << "\nSai" << endl;
	}

	system("pause");
	return 0;
}