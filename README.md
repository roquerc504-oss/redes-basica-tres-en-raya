//# redes-basica-tres-en-raya
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>
#include<ctime>
using namespace std;
double activacion(double x){
	return 1.0/(1.0+exp(x));
}
double jugador1(double dtee[3][3]){
	srand(time(0));

		vector<vector<double>>historial;
		double ppee[3][3]={0.0},ppcc[18][9];
		double dtss[3][3]={0.0},ppss[18][9];
		double bia_entrada[3][3]={0.0};
		double bia_capa[18]={0.0};
		double bia_salida[3][3]={0.0};
	
		
		for(int r=0;r<3;r++){
			for(int j=0;j<3;j++){
				ppee[r][j]=0.01+(double)rand()/RAND_MAX*0.02;
			//	ppss[r][j]=0.01+(double)rand()/RAND_MAX*0.02;
				bia_entrada[r][j]=0.05+(double)rand()/RAND_MAX*0.05;
				bia_salida[r][j]=0.05+(double)rand()/RAND_MAX*0.05;
			}
		}
		for(int r=0;r<18;r++){
			for(int j=0;j<9;j++){
			ppcc[r][j]=0.01+(double)rand()/RAND_MAX*0.02;
			ppss[r][j]=0.05+(double)rand()/RAND_MAX*0.05;
			}
			
			bia_capa[r]=0.05+(double)rand()/RAND_MAX*0.05;
			
		}
		//capa de entrada
	double suma=0.0;
	double salida_neuronas_entrada[3][3]={0.0};
	double resultado[9]={0.0};
	int i=0;
	for(int r=0;r<3;r++){
		for(int j=0;j<3;j++){
			suma=bia_entrada[r][j];
			suma+=ppee[r][j]*dtee[r][j];
			salida_neuronas_entrada[r][j]=activacion(suma);
			resultado[i]=salida_neuronas_entrada[r][j];
			i++;
			suma=0.0;
		}
	}
//capa oculta
	suma=0.0;
	double salida_capa[18]={0.0};
	for(int r=0;r<18;r++){
		suma=bia_capa[r];
		for(int j=0;j<9;j++){
			suma+=ppcc[r][j]*resultado[j];
		}
		salida_capa[r]=activacion(suma);
		suma=0.0;
	}
//capa de salida
	suma=0.0;
	double salida_final[3][3]={0.0};
	for(int r=0;r<3;r++){
	    for(int j=0;j<3;j++){
	        suma=bia_salida[r][j];
	        int pos=r*3+j;
	        for(int i=0;i<18;i++){
	            suma+=ppss[i][pos]*salida_capa[i];
	        }
	        salida_final[r][j]=activacion(suma);
	        suma=0.0;
	    }
	}

	for(int r=0;r<3;r++){
		vector<double>linea;
		for(int j=0;j<3;j++){
			linea.push_back(salida_final[r][j]);
			
		}
		historial.push_back(linea);	
	}
	for(int r=0;r<3;r++){
		for(int j=0;j<3;j++){
			if(dtee[r][j]==1.0) salida_final[r][j]=salida_final[r][j]-1.0;
			if(dtee[r][j]==2.0) salida_final[r][j]=salida_final[r][j]-2.0;
		}
	}
	double mejor_opcion=salida_final[0][0];
	int eleccion=0.0, pos=0.0;
	for(int r=0;r<3;r++){
		for(int j=0;j<3;j++){
			if(salida_final[r][j]>mejor_opcion){
				mejor_opcion=salida_final[r][j];
				pos=r*3+j;
				eleccion=pos;
			}
		}
	}

	return pos;
}
double jugador2(double dtee[3][3]){
	srand(time(0));

		vector<vector<double>>historial;
		double ppee[3][3]={0.0},ppcc[18][9];
		double dtss[3][3]={0.0},ppss[18][9];
		double bia_entrada[3][3]={0.0};
		double bia_capa[18]={0.0};
		double bia_salida[3][3]={0.0};
	
		
		for(int r=0;r<3;r++){
			for(int j=0;j<3;j++){
				ppee[r][j]=0.01+(double)rand()/RAND_MAX*0.02;
			//	ppss[r][j]=0.01+(double)rand()/RAND_MAX*0.02;
				bia_entrada[r][j]=0.05+(double)rand()/RAND_MAX*0.05;
				bia_salida[r][j]=0.05+(double)rand()/RAND_MAX*0.05;
			}
		}
		for(int r=0;r<18;r++){
			for(int j=0;j<9;j++){
			ppcc[r][j]=0.01+(double)rand()/RAND_MAX*0.02;
			ppss[r][j]=0.05+(double)rand()/RAND_MAX*0.05;
			}
			
			bia_capa[r]=0.05+(double)rand()/RAND_MAX*0.05;
			
		}
		//capa de entrada
	double suma=0.0;
	double salida_neuronas_entrada[3][3]={0.0};
	double resultado[9]={0.0};
	int i=0;
	for(int r=0;r<3;r++){
		for(int j=0;j<3;j++){
			suma=bia_entrada[r][j];
			suma+=ppee[r][j]*dtee[r][j];
			salida_neuronas_entrada[r][j]=activacion(suma);
			resultado[i]=salida_neuronas_entrada[r][j];
			i++;
			suma=0.0;
		}
	}
//capa oculta
	suma=0.0;
	double salida_capa[18]={0.0};
	for(int r=0;r<18;r++){
		suma=bia_capa[r];
		for(int j=0;j<9;j++){
			suma+=ppcc[r][j]*resultado[j];
		}
		salida_capa[r]=activacion(suma);
		suma=0.0;
	}
//capa de salida
	suma=0.0;
	double salida_final[3][3]={0.0};
	for(int r=0;r<3;r++){
	    for(int j=0;j<3;j++){
	        suma=bia_salida[r][j];
	        int pos=r*3+j;
	        for(int i=0;i<18;i++){
	            suma+=ppss[i][pos]*salida_capa[i];
	        }
	        salida_final[r][j]=activacion(suma);
	        suma=0.0;
	    }
	}

	for(int r=0;r<3;r++){	
		vector<double>linea;
		for(int j=0;j<3;j++){
			linea.push_back(salida_final[r][j]);
			
		}
		historial.push_back(linea);	
	}
	for(int r=0;r<3;r++){
		for(int j=0;j<3;j++){
			if(dtee[r][j]==1.0) salida_final[r][j]=salida_final[r][j]-1.0;
			if(dtee[r][j]==2.0) salida_final[r][j]=salida_final[r][j]-2.0;
		}
	}
	double mejor_opcion=salida_final[0][0];
	int eleccion=0.0, pos=0.0;
	for(int r=0;r<3;r++){
		for(int j=0;j<3;j++){
			if(salida_final[r][j]>mejor_opcion){
				mejor_opcion=salida_final[r][j];
				pos=r*3+j;
				eleccion=pos;
			}
		}
	}
	return pos;
}
int main(){
	double dtee[3][3];
	for(int r=0;r<3;r++){
		for(int j=0;j<3;j++){
			dtee[r][j]=0.0;
		}
	}
	bool opc=false;
	while(!opc){
			int pos_jugador1=jugador1(dtee);
		int fila=pos_jugador1/3; int columna=pos_jugador1%3; dtee[fila][columna]=1.0;
		cout<<"\njugador 1 eleige: "<<pos_jugador1<<endl;
		for(int r=0;r<3;r++){
			cout<<"\n";
			for(int j=0;j<3;j++){
				cout<<dtee[r][j]<<" ";
			}
		}
		int pos_jugador2=jugador2(dtee);
		fila=pos_jugador2/3; columna=pos_jugador2%3; dtee[fila][columna]=2.0;
		cout<<"\njugador 2 eleige: "<<pos_jugador2<<endl;
		for(int r=0;r<3;r++){
			cout<<"\n";
			for(int j=0;j<3;j++){
				cout<<dtee[r][j]<<" ";
			}
		}
		opc=true;
	}//final de while

	
	
	return 0;
}
