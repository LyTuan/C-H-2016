/*
	Nguoi thuc hien: Ly Van Tuan
	Ma sinh vien: 14020513
	gmail: lytuanduong96@gmail.com
	Bai: Tim min max su dung cap phat dong
*/
#include <iostream>

using namespace std;

void minMax(int *array, const int size);
int main(){
	int *array;
	int size = 5;
	
	array = new int [size];
	
	for(int i=0; i<size; i++){
		cout<<"a["<<i<<"]=";
		cin>>array[i];
	}
	minMax(array, size);
	delete[]array;
	
	return 0;
}
//Tim min max va in ra man hinh
void minMax(int *array, const int size){
	int max = array[0];
	int min = array[0];
	for(int i =0; i<size; i++){
		if(array[i]>max){
			max=array[i];
		}
		if(array[i]<min){
			min = array[i];
		}
	}
	cout<<"Max:"<<max<<endl;
	cout<<"Min:"<<min<<endl;
	
}
