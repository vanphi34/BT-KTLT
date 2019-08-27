#include <iostream>

using namespace std;

int main(){
	int n;
	do{
		cout << "Nhap so nguyen n (0<=n<10000): "; cin >> n;
	} while(n<0||n>=10000);
	
	int a,b,c,d;
	a=n/1000;
	b=(n/100)%10;
	c=(n/10)%10;
	d=n%10;
	
	cout << "Cach doc so nguyen do la: " ;
	if(a>0){
		cout << a << " nghin " << b << " tram " << c << " chuc " << d << " don vi. " << endl; 
	}
	else if(b>0){
		cout << b << " tram " << c << " chuc " << d << " don vi. " << endl; 
	}
	else if(c>0){
		cout << c << " chuc " << d << " don vi. " << endl; 
	}
	else{
		cout << d << " don vi. " << endl; 
	}
	
	return 0;
}
