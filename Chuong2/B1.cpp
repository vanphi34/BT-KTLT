#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Nhap so nguyen n: "; cin >> n;
	
	if(n%2==0){
		cout << "So " << n << " la so chan.";
	}
	else{
		cout << "So " << n << " la so le.";
	}
	
	return 0;
}
