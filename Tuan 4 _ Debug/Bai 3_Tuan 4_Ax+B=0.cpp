#include<iostream>

#include<stdlib.h>

using namespace std;

int main()

{

int a,b;

float x;

cout << "a ="; cin >> a;

cout << "b ="; cin >> b;

if (a !=0){
	x = -b/a;

cout << "Nghiem la:" << x << endl;
}

else{

if (b!=0) cout << "Phuong trinh vo nghiem!" << endl;

else cout << "Phuong trinh vo so nghiem!" << endl;

}

system("PAUSE");

return 0;

}
