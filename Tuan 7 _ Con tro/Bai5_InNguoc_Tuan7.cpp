/*
	Nguoi thuc hien: Ly Van Tuan
	Ma sinh vien: 14020513
	gmail: lytuanduong96@gmail.com
	Bai: Dao nguoc day so nguyen
*/
#include <iostream>

using namespace std;


void inNguoc(int *array, int size);

int main(){
	int *array;
	int size;
	cout<<"Nhap kich thuoc cua mang:";
	cin>>size;
	array = new int[size];
	
	for(int i=0; i<size; i++){
		cout<<"array["<<i<<"]=";
		cin>>array[i];
	}
	inNguoc(array, size);
	
	delete[]array;
	
	return 0;
}

void inNguoc(int *array, int size){
	
	for(int i=size-1; i>=0; i--){
		cout<<array[i];
	}
	cin.get();
}
