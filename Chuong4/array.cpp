#include <iostream>
#include <algorithm>
#include <fstream>
#include <iomanip>

using namespace std;
typedef double* Array;

void nhap(Array array, int size){
	cout << "Nhap mang: " << endl;
	for(int i=0 ; i<size ; i++){
		cout << "Nhap so thu " << i+1 << " : ";
		cin >> *(array+i);
	}
}

void xuat(Array array, int size){
	for(int i=0 ; i<size ; i++){
		cout << *(array+i) << ' ';
	}
	cout << endl;
}

void sortIncreasing(Array array,int size){
	sort(array,array+size);
}

double sumEven(Array array,int size){
	double sum=0;
	for(int i=0 ; i<size ; i+=2){
		sum+=*(array+i);
	}
	return sum;
}

void toFile(Array array,int size, const char ten[]){
	fstream f;
	f.open(ten,ios_base::out);
	f << size << endl;
	for(int i=0 ; i<size ; i++){
		f << fixed << setprecision(2) << *(array+i) << ' ';
	}
	f << "\nend";
	f.close();
}

void printLargestandNearLargest(Array array, int size){
	int x=-1,y=-1;
	double max=*array;
	for(int i=0 ; i<size ; i++){
		if(max<*(array+i)){
			max=*(array+i);
			x=i;
		}
	}
	max=*array;
	for(int i=0 ; i<size ; i++){
		if(i==x){
			continue;
		}
		if(max<*(array+i)){
			max=*(array+i);
			y=i;
		}
	}
	cout << "Vi tri so lon nhat: " << (x==-1?-1:x+1) << endl;
	cout << "Vi tri so lon thu hai: " << (y==-1?-1:y+1) << endl;
}

bool threePositiveInARow(Array array,int size){
	int count=0;
	for(int i=0 ; i<size ; i+=2){
		if(*(array+i)>0){
			count++;
			if(count==3){
				return true;
			}
		}
		else count=0;
	}
	return false;
}

void f(Array ptr){
	delete ptr;
}

void deleteIthNum(Array array,int &size,int i){
	int n=size;
	for(int vt=i ; vt<size-1 ; vt++){
		array[vt]=array[vt+1]; //t luoi make colour r :V
	}
	size--;
	f(array+size);
}

void delete5Bigger(Array array,int &size){
	for(int i=0 ; i<size ; i++){
		if(array[i]>5){
			deleteIthNum(array,size,i);
			i--;
		}
	}
}
int main() {
	int n;
	cin >> n;
	Array a=new double[n];
	nhap(a,n);
	xuat(a,n);
	
	cout << "Ban co muon sap xep tang dan a khong?(Y/N)" << endl;
	char *x;
	cin >> *x;
	if(*x=='Y'||*x=='y'){
		sortIncreasing(a,n);
		xuat(a,n);
	}
	delete x;
	
	cout << "Tong cac phan tu co chi so chan: " << sumEven(a,n) << endl;
	
	toFile(a,n,"array.txt");
	printLargestandNearLargest(a,n);
	delete5Bigger(a,n);
	cout << "Mang sau khi xoa: " << endl;
	xuat(a,n);
	delete [] a;
	
	//hinh nhu t cap phat sai, xin loi c
	return 0;
}
