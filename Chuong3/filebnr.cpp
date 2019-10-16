#include <iostream>
#include <fstream>
#include <algorithm>

//lam qua magic bnr

struct haha{
	int x;
	int y;
	char ok[4];
	haha(){
		x=abs(rand()%26);
		y=abs(rand()%26);
		ok[0]='a'+x;
		ok[1]='a'+y;
	}
};

int main(){
	haha str[10];
	for(int i=0 ; i<10 ; i++){
		str[i]=haha();
		std::cout << str[i].x << ' ' << str[i].y << ' ' << str[i].ok << std::endl;
	}
	
	std::fstream f;
	f.open("haha.bnr",std::ios::out);
	f.write((char*)&str,sizeof(str));
	f.close();
	
	haha huhu[10];
	f.open("haha.bnr",std::ios::in);
	f.read((char*)&huhu,sizeof(huhu));
	f.close();
	
	for(int i=0 ; i<10 ; i++){
		std::cout << huhu[i].x << ' ' << huhu[i].y << ' ' << huhu[i].ok << std::endl;
	}
	
	return 0;
}
