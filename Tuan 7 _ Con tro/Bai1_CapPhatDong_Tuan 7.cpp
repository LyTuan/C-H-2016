/*
	Nguoi thuc hien: Ly Van Tuan 
	Ma sinh vien : 14020513
	gmail: lytuanduong96@gmail.com
	Bai1: Sap xep theo bang chu cai su dung cap phat dong
*/
#include <iostream>

using namespace std;


void readNames (char * names[], const int size);
void writeNames (char * names[], const int size);
void bubbleSort(char * names[], const int size);
int main(){
	char **names;
	int size=5;
	names = new char*[size];
	for(int i=0; i<size; i++){
		names[i] = new char[1000];
	}
	readNames(names, size);
	writeNames(names,size);
	bubbleSort(names,size);
	writeNames(names,size);
	for(int i=0; i<size;i++){
		delete []names[i];
	}
	delete []names;// Giai phong bo nho toan bo mang # delete names; delete names la chi giai phong names[0]
	return 0;
}
//Nhap du lieu
void readNames(char *names[],const int size){
	for(int i=0; i<size; i++){
		cout<<"Nhap ten vao phan tu thu "<<i<<":";
		cin.getline(names[i],1000);
		
	}
	cin.ignore();
}
//In du lieu ra man hinh
void writeNames (char * names[], const int size){
	for(int i=0; i<size;i++){
		cout<<names[i];
	}
	cout<<endl;
	cin.get();
}
//Thuat toan sap xep noi bot
void bubbleSort(char* names[], const int size){
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size ;j++){
			
			if(int (names[j][0])<int (names[i][0])){
				char *tam;
				tam = names[i];
				names[i]= names[j];
				names[j] = tam;
				cout<<"name[j]:"<<names[j]<<endl<<"name[i]: "<<names[i]<<endl;			
				}
				
		}
	}
}
