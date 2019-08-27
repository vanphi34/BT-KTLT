#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//chi tinh gia tri bieu thuc phia sau

int main(){
	float x,y;
	cout << "Nhap so thuc x: "; cin >> x;
	cout << "Nhap so thuc y: "; cin >> y;
	
	float kq;
	kq=log(x*x+pow(y,4))+abs(y-x)+(pow(x,6)+pow(y,7))/exp(x+y);
	
	cout << "Ket qua bieu thuc T:  "<< fixed << setw(10) << setprecision(5) << kq;
	
	return 0;
}
