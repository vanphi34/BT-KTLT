#include <bits/stdc++.h>
using namespace std;

void bienluan(float a, float b);

int main(){
	float a,b;
	cout << "Nhap vao he so a: " ; cin >> a;
	cout << "Nhap vao he so b: " ; cin >> b;
	
	bienluan(a,b);
	
	return 0;
}

void bienluan(float a, float b){
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
