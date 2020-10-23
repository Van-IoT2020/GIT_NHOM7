#include <iostream>
using namespace std;

int tongBT(int &a, int &b);
int hieuBT(int &a, int &b);
int tichBT(int &a, int &b);
float thuongBT(int &a, int &b);

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
int chuvihcn ( int &dai,int &rong)
{
	int chuvi = (dai + rong) *2; 
	return chuvi;
}
int dientichhcn (int &dai,int &rong)
{
	int dientich = dai*rong;
	return dientich;
}
int main()
{
	int a, b;

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
	
	cout << "\nNhap vao dai:";
	cin >> dai;
	cout << "\nNhap vao rong:";
	cin >> rong;
	cout << "\nchu vi hcn la:" << chuvihcn(dai, rong);
	cout << "\ndien tich hcn la:" << dientichhcn(dai, rong);

	system("pause");
	return 0;
}