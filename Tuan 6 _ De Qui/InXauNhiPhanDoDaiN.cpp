#include <stdio.h>
#include <iostream>

using namespace std;

int N=3;

void binary(int A[],int i){
	int v;
	for(v=0; v<2; v++){
		A[i]=v;
		if(i<N-1){
			binary(A,i+1);
		}else{
			int j; 
			for(j=0; j<N; j++){
				cout<<A[j];	
			}
			cout<<endl;
		}
	}
}
int main(){
	int A[100];
	binary(A,0);
	return 0;
}
