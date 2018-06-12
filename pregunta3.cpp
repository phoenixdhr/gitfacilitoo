#include <iostream>
using namespace std;

int main(){

int a,b,c,d;
cout<<"Numeros Naturales: ";

for (int i=1; i<=100; i++){
	
	
if (i%6!=0 && i%13!=0 && i%17!=0 && i%8!=0 )
{
	
cout<<i<<endl;	
}
else{
	if (i%6==0){
	cout<<i<<"multiplo de 6"<<endl;
	
	}
	else{
	if (i%13==0)	
	{cout<<i<<"multiplo de 13"<<endl;
	}
	else{
	if (i%17==0)	
	{cout<<i<<"multiplo de 17"<<endl;
	}	
	else
		if (i%8==0)	
	{cout<<" "<<endl;
	}
		
	}
	}
	
}

}
	return 0;
}

