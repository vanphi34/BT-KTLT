#include <iostream>
#include <fstream>

int main(){
	std::fstream f;
	f.open("manga.txt",std::ios::in);
	int n;
	f>>n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		f>>a[i];
	}
	f.close();
	
	for(int i=0 ; i<n ; i++){
		std::cout << a[i] << ' ';
	}
	
	return 0;
}
