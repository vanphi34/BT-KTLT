#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout << "Nhap so nguyen a: "; cin >> a;
	cout << "Nhap so nguyen b: "; cin >> b;
	
	int tong,hieu,tich,nguyen,du;
	float thuong;
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	nguyen=a/b;
	du=a%b;
	thuong=(float)a/b;
	
	cout << "Tong hai so a va b: " << tong << endl;
	cout << "Hieu hai so a va b: " << hieu << endl;
	cout << "Tich hai so a va b: " << tich << endl;
	cout << "Thuong hai so a va b: " << thuong << endl;
	cout << "Phan nguyen chia a cho b: " << nguyen << endl;
	cout << "Phan du chia a cho b: " << du << endl;
	
	return 0;
}
