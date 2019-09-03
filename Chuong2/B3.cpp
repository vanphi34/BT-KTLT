#include <bits/stdc++.h>
using namespace std;

//import B2.cpp
void bienluanbacnhat(float a,float b);
void bienluanbachai(float a,float b,float c);

int main(){
	float a,b,c;
	cout << "Nhap vao he so a: " ; cin >> a;
	cout << "Nhap vao he so b: " ; cin >> b;
	cout << "Nhap vao he so c: " ; cin >> c;
	
	bienluanbachai(a,b,c);
	
	return 0;
}

void bienluanbacnhat(float a, float b){
	if(a==0){
		if(b==0){
			cout << "Phuong trinh vo so nghiem.";
		}
		else{
			cout << "Phuong trinh vo nghiem.";
		}
	}
	else{
		float nghiem=-b/a;
		cout << "Phuong trinh co nghiem duy nhat: " << fixed << setprecision(3) << nghiem;
	}
}

void bienluanbachai(float a,float b,float c){
	if(a==0){
		bienluanbacnhat(b,c);
		return;
	}
	
	float d=b*b-4*a*c;
	if(d<0){
		cout << "Phuong trinh vo nghiem.";
		return;
	}
	if(d==0){
		float x=-b/(2*a);
		cout << "Phuong trinh co nghiem kep x1 = x2 = " << fixed << setprecision(3) << x;
		return;
	}
	float x1,x2;
	x1=(-b+sqrt(d))/2/a;
	x2=(-b-sqrt(d))/2/a;
	cout << "Phuong trinh co hai nghiem phan biet:" << endl;
	cout << "\tx1 = " << fixed << setprecision(3) << x1;
	cout << "\tx2 = " << fixed << setprecision(3) << x2;
}
