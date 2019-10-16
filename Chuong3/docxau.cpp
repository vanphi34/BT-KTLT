#include <iostream>
#include <fstream>

//tao 1 txt chua 1 xau r tao txt chua xau ngc lai :v

int main(){
	char a[]="Con cho ghet con meo roi thi sao";
	std::fstream f;
	f.open("xau1.txt",std::ios::out);
	f<<a;
	f.close();
	
	char b[1000];
	f.open("xau1.txt",std::ios::in);
	f.getline(b,1000);
	f.close();
	
	std::cout << b;
	int n=0;
	while(b[n]!=0){
		n++;
	}
	for(int i=0 ; i<n/2 ; i++){
		std::swap(b[i],b[n-i-1]);
	}
	
	f.open("1uax.txt",std::ios::out);
	f<<b;
	f.close();
	
	return 0;
}
