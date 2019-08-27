#include<bits/stdc++.h>

using namespace std;

void nhap(int &n, int &m);
long long tongChanDuong(int n, int m);
long long tongChanAm(int n, int m);
long long tongLeDuong(int n, int m);
long long tongLeAm(int n, int m);
void menu();
void xuli(int n,int m);

int main(){
	int n,m;
	nhap(n,m);
	menu();
	xuli(n,m);
	
	return 0;
}

void nhap(int &n, int &m){
	do{
		cout << "Nhap so nguyen duong n: "; cin >> n;
	} while(n<1);
	do{
		cout << "Nhap so nguyen duong m: "; cin >> m;
	} while(m<1);
}

void menu(){
	cout << "Chon phuong thuc xu li:" << endl;
	cout << "\t1. Tinh tong cac so chan duong trong khoang tu n den m." << endl;
	cout << "\t2. Tinh tong cac so chan am trong khoang tu -n den -m." << endl;
	cout << "\t3. Tinh tong cac so le duong trong khoang tu n den m." << endl;
	cout << "\t4. Tinh tong cac so le am trong khoang tu -n den -m." << endl;
	cout << "\t5. Ket thuc chuong trinh." << endl;
}

void xuli(int n,int m){
	int chon;
	long long kq;
	do{
		cout << "Nhap phuong thuc xu li: "; cin >> chon;
		switch(chon){
			case 1:
				kq=tongChanDuong(n,m);
				cout << "Tong cac so chan duong trong khoang tu n den m: " << kq << endl;
				break;
			case 2:
				kq=tongChanAm(n,m);
				cout << "Tong cac so chan am trong khoang tu n den m: " << kq << endl;
				break;
			case 3:
				kq=tongLeDuong(n,m);
				cout << "Tong cac so le duong trong khoang tu n den m: " << kq << endl;
				break;
			case 4:
				kq=tongLeAm(n,m);
				cout << "Tong cac so le am trong khoang tu n den m: " << kq << endl;
				break;
			case 5:
				cout << "Chuong trinh ket thuc thanh cong." << endl;
				break; //hoac return; cung duoc
			default:
				cout << "Sai phuong thuc. Vui long nhap lai." << endl;
		}
	} while(chon!=5);
}

long long tongChanDuong(int n, int m){
	long long kq=0;
	for(int i=n+1 ; i<m ; i++){
		if(i%2==0){
			kq+=i;
		}
	}
	return kq;
}

long long tongChanAm(int n, int m){
	n=-n;
	m=-m;
	long long kq=0;
	for(int i=n+1 ; i<m ; i++){
		if(i%2==0){
			kq+=i;
		}
	}
	return kq;
}

long long tongLeDuong(int n, int m){
	long long kq=0;
	for(int i=n+1 ; i<m ; i++){
		if(i%2==1){
			kq+=i;
		}
	}
	return kq;
}

long long tongLeAm(int n, int m){
	n=-n;
	m=-m;
	long long kq=0;
	for(int i=n+1 ; i<m ; i++){
		if(i%2==1){
			kq+=i;
		}
	}
	return kq;
}
