/**
	Nguoi thuc hien: Ly Van Tuan
	Ma SV: 14020513
	gmail: lytuanduong96@gmail.com
	De bai: Ham random 1000 so tu 0->32000. Dem so lan xuat hien
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void demSo(int n);

int main(){
	int n=32000;
	demSo(n);
	
	return 0;
}
void demSo(int n){
	int demSo[32000];
	//Gan gia tri cho mang demSo
	for(int i=0; i<32000; i++){
		demSo[i]=0;
	}
	//Tang 1 cho cac o demSo co vi tri trung voi so vua random duoc
	for(int i=0; i<1000; i++){
		int so = rand()%n;
		demSo[so]+=1;
	}
	//In cac gia tri co tong lon hon 0
	for(int i=0; i<32000; i++){
		if(demSo[i]>0){
			cout<<"So "<<i<<"xuat hien "<<demSo[i]<<" lan \n";
		}
	}
}
