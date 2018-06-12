	#include <iostream>
#include <string.h>
using namespace std;

int suma_impar(int N){
	int a, b;
	
	
	
	a=0;
	
	
	
		
	for (int i=1; i<=N; i++)
	{
		a=2*i-1+a;
		
	}
	

	return a;
		
}


int main(){
	int N;
	cout<<"Ingrese N: "<<endl;
	cin>>N;
	
	int s=suma_impar(N);
	cout<<"la suma es: "<<s;
	return 0;
	
}
