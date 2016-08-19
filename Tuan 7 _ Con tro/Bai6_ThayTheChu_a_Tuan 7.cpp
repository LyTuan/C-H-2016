/*
	Nguoi thuc hien: Ly Van Tuan
	Ma sinh vien: 14020513
	gmail: lytuanduong96@gmail.com
	Bai: Thay the ky tu a thanh b
*/
#include <iostream>

using namespace std;
void ThayThe(char *xau, int size);
int main(){
	char * xau;
	int size =1000;
	xau = new char [size];
	cin.getline(xau, size);
	ThayThe(xau, size);
	delete []xau;
	return 0;
}
void ThayThe(char *xau, int size){
	for(int i=0; i< size; i++){
		if(xau[i]=='a'){
			xau[i]='b';
		}
	}
	cout<<xau;
}

