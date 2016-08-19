#include <iostream>

using namespace std;

int N=5;
int a[100],b[100],c[100];
int DEM =0;
void hoanvi(int k);
int main(){
	for(int i=1; i<=N; i++){
		a[i]=0;	
	}
	int A[100];
	hoanvi(1);
	return 0;

}

void hoanvi(int k){
	for(int i=1; i<=N; i++){
		if(a[i]==0){
				b[k]=i;
				a[i]=1;
			if(k==N){
					int j; 
					for(j=1; j<=N; j++){
						
						cout<<b[j];	
					}
					cout<<endl;
			}	else{
				hoanvi(k+1);		
			}	
			a[i]=0;
		}
		
	}
}
