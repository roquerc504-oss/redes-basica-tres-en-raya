#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
double activacion(double x){
	return 1.0/(1.0+exp(x));
}
int main(){
	double neurona_entrada[3][3]={0.0};
	double neurona_capa[18]={0.0};
	double neurona_salida={0.0};
	double ppee[3][3]={0.0},dtee[3][3]={0.0},ppcc[18];
	double ppss[3][3]={0.0},dtss[3][3]={0.0};
	double bia_entrada[3][3]={0.0};
	double bia_capa[18]={0.0};
	double bia_salida=0.0;
	
	for(int r=0;r<3;r++){
		for(int j=0;j<3;j++){
			ppee[r][j]=0.01+(double)rand()/RAND_MAX*0.02;
			ppss[r][j]=0.01+(double)rand()/RAND_MAX*0.02;	
		}
	}
	for(int r=0,r<18;r++){
		ppcc[r][j]=0.01+(double)rand()/RAND_MAX*0.02;
	}
//capa de entrada
	double suma=0.0;
	double resultado[3][3]={0.0};
	for(int r=0;r<3;r++){
		for(int j=0;j<3;j++){
			suma=bia_entrada[r][j];
			suma+=ppee[r][j]*neurona_entrada[r][j];
			resultado[r][j]=activacion(suma);
		}
	}
	for(int r=0;r<3;r++){
		cout<<"respuesta red: ";
		for(int j=0;j<3;j++){
			cout<<resultado[r][j]<<" ";
		}cout<<"\n";
	}
//capa oculta
	for(int r=0;r<18;r++){
		
	}
	
	
	return 0;
}
