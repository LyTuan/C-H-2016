#include <iostream>
#include <string.h>
using namespace std;

void daoChuoi( char mang[],int n);
void daoChuoiDeQui(char mang[],int n);

int main(){
	char chuoi[1000];
	cin.getline(chuoi,1000);
	daoChuoi(chuoi,strlen(chuoi));
	cout<<endl;
	daoChuoiDeQui(chuoi,strlen(chuoi)-1);	
	
	return 0;
}

void daoChuoi( char mang[],int n){
	for (int i=n-1; i>=0; i--){
		cout<<mang[i];
	}
}
void daoChuoiDeQui(char mang[],int n){
	if(n==0){
		cout<<mang[n];
	}else{
		cout<<mang[n];
		daoChuoiDeQui(mang,n-1);
	}
}
