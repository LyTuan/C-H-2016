#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char array[100][100];
	for(int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
			cin.getline(array[i],100);
//		}
	}
	cout<<endl;
	for(int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
			cout<<array[i];
//		}
	}
//	cin.getline(array,100);
//	cout<<array;

	ofstream outfile("dulieu.txt");
	outfile<<"Cong hoa xa hoi Viet Nam";
	for(int i ; i<9 ; i++){
		outfile<<i*i;
	}
	
	outfile.close();
	return 0;	
			
}
