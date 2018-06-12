#include <iostream>
using namespace std;

int main(){

int N;
double r,k,p;

p=0;
k=0;

do 
{

	cout<<"ingrese numero entero: ";
	cin>>N;
	p=p+N;
	k=k+1;
	} while ( N!=0 );

r=p/(k-1);

cout<<"el promedio es: "<<r<<endl;
system ("pause");
return 0;
}
