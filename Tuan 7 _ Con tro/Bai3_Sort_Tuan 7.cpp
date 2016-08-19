/*
	Nguoi thuc hien: Ly Van Tuan
	Ma sinh vien: 14020513
	gmail: lytuanduong96@gmail.com
	Bai: Sap xep mang dung mang cap phat dong
*/
#include <iostream>

using namespace std;

void sort(int *array, int size);

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
	sort(array, size);
	
	delete[]array;
	return 0;
}
//Sap xep va in ra man hinh
void sort(int *array, int size){
	for(int i =0; i< size; i++){
		for(int j=i+1; j<size; j++){
			if(array[i]>array[j]){
				int tam ;
				
				tam = array[i];
				array[i] = array[j];
				array[j] = tam;
			}
		}
	}
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i = 0; i<size; i++){
		cout<<array[i]<<" ";
	}
}

