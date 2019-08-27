#include <iostream>

using namespace std;

//de bai yeu cau su dung bieu thuc dieu kien

int main(){
	float x,y,z;
	cout << "Nhap so thuc x: "; cin >> x;
	cout << "Nhap so thuc y: "; cin >> y;
	cout << "Nhap so thuc z: "; cin >> z;
	
	float to,nho;
	to=nho=x;
	to=to>y?to:y;
	to=to>z?to:z;
	nho=nho<y?nho:y;
	nho=nho<z?nho:z;
	
	cout << "So lon nhat la: " << to << endl;
	cout << "So nho nhat la: " << nho << endl;
	
	return 0;
}
