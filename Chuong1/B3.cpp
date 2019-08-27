#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float x;
	cout << "Nhap vao so x: "; cin >> x;
	
	float ketqua;
	ketqua=(x*x+exp(x)+sin(x)*sin(x))/sqrt(x*x+1);
	
	cout << "Gia tri cua bieu thuc can tinh: " << ketqua;
	
	return 0;
}
