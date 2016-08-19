#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ThapHaNoi(char A,char B, char C,int n);
int main(int argc, char** argv) {
 	char A= 'A';
 	char B='B';
 	char C='C';
 	ThapHaNoi(A,B,C,4);
	return 0;
}
void ThapHaNoi(char A,char B, char C,int n){
	if(n==1){
		cout<<"Chuyen dia "<<n <<" tu "<<A<<" sang "<<C<<"\n";
	}
	if(n>2||n==2){
		ThapHaNoi(A,C,B,n-1);
		cout<<"Chuyen dia "<<n<<" tu "<<A<<" sang "<<C<<"\n";
		ThapHaNoi(B,A,C,n-1);
	}
	
}
