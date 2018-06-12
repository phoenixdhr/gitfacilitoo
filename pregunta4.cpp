#include <iostream>
using namespace std;
main(){
	

	double notas[5][4];
	double resultados[5][5];
	double b,max,min;
	
	cout<<"ingresar las notas de los alumnos"<<endl;
	
	//ingresar la matriz de notas
	for (int i=0; i<=4; i++){
		
		cout<<"ingresar las notas del alumno "<<i+1<<": "<<endl;
		
		for(int j=0; j<=3; j++){
			cout<<"nota "<<j+1<<": ";
			cin>>notas[i][j];
			
		}
	}
	
	//formar la matriz resultado
	
		for (int i=0; i<=4; i++){
		resultados[i][4]=0;
		
		for (int j=0; j<=3; j++){
		
		resultados[i][j]=notas[i][j];
				
		}
		
		//columna de promedio
		
		b=notas[i][0];
		for(int j=0; j<=2; j++){
		
		if(b<=notas[i][j+1])
		{
		
		resultados[i][4]=(resultados[i][4]+notas[i][j+1]);
		
		}
		
		else{
		
		resultados[i][4]=(resultados[i][4]+b);
		b=notas[i][j+1];
		}
			
		}
		resultados[i][4]=resultados[i][4]/3;
		
		}
		
		
	
	for (int i=0; i<=4; i++){
		cout<<"Alumno "<<i+1<<": ";
		
		for (int j=0; j<=4; j++){
		
			cout<<"\t"<<resultados[i][j];
		}
		cout<<endl;
	}
	
	max=resultados[0][4];
	for(int i=0; i<=3; i++){
		
		if(max<=resultados[i+1][4])
		{
		
		max=resultados[i+1][4];
		
		}
		}
	
	min=resultados[0][4];
	for(int i=0; i<=3; i++){
		
		if(min>=resultados[i+1][4])
		{
		
		min=resultados[i+1][4];
		
		}
		}
	
	cout<<"El promedio maximo es: "<<max<<endl;
	cout<<"El promedio minimo es: "<<min<<endl;
	
	return 0;
}
