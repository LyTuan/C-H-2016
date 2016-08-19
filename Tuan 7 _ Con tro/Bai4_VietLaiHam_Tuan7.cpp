/*
	Nguoi thuc hien: Ly Van Tuan
	Ma sinh vien: 14020513
	gmail: lytuanduong96@gmail.com
	Bai: Viet lai ham dao nguoc xau
*/
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

char* reserseString(char *str);

int main(){
	
	char *str;
	str = new char[100];
	cin.getline(str,100);
	cout<<reserseString(str);
	
	delete[]str;

	return 0;
}
char* reserseString(char *str){
	int len = strlen(str);

	char *result = new char[len+1];
	for(int i=0; i< len; i++){
		*(result+i) = *(str+(len-i-1));

	}
	*(result+len)='\0';
	return result;

}
