#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int tich(int a, int b){
	return a*b;
}

float thuong(int a, int b){
	return a/b;
}

int main()
{
	int a,b, tong, hieu, tich, thuong;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "\nNhap vao a:";
	cin>> a;
	cout << "\nNhap vao b:";
	cin>> b;
	cout << "\nTich a*b ="<<tich(a,b);
	cout << "\nThuong a/b ="<<thuong(a,b);
	system("pause");
	return 0;
}