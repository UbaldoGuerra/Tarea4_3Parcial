#include <iostream>
#include <math.h>

using namespace std;

/*Crear un menú con las siguientes operaciones:

Fórmula cuadrática.
Par o Impar.
Convertir de Kilogramos a Gramos.
Convertir de Libras a Onzas.

Para cada una de las operaciones debe crear una función y un procedimiento.*/

//Funciones
int menu(){
	int opcion; 
	
	system ("cls");
	
	cout<<"****************************************\n";
	cout<<"*                MENU                  *\n";
	cout<<"*  1. Formula cuadratica               *\n";
	cout<<"*  2. Par / Impar                      *\n";
	cout<<"*  3. Convertir de Kilogramos a Gramos *\n";
	cout<<"*  4. Convertir de Libras a Onzas      *\n";
	cout<<"*  5. Salir                            *\n";
	cout<<"****************************************\n";
	cout<<"\n";
	cout<<"  Seleccione la opcion: ";
	cin>>opcion;
	
	return opcion;
}

double formulacuadraticaX1(double a, double b, double c){
	double x1;
	x1 = (-b + sqrt(pow(b,2) - (4*a*c))) / (2*a);
	
	return x1;
}

double formulacuadraticaX2(double a, double b, double c){
	double x2;
	x2 = (-b - sqrt(pow(b,2) - (4*a*c))) / (2*a);
	
	return x2;
}
	
int ParImparF(int numero){
	int respuesta;
	respuesta=numero%2; 
	return respuesta;
}

double Kg_GrF(int KG){
	int gramos;
	gramos=KG*1000; 
	return gramos;
}

double Lb_onzas(int libras){
	int onzasF;
	onzasF=libras*16; 
	return onzasF;
}


//Procedimientos
void opcion1(){
	system ("cls");
	double a, b, c, x1, x2, raiz, filtroRaiz;
	
	cout<<"***********************************\n";
	cout<<"*  1. Formula cuadratica          *\n";
	cout<<"***********************************\n";	

	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	cout<<"Ingrese el valor de c: ";
	cin>>c;
		if (a==0){
			cout<<"a no puede ser cero. \n";
		} else{
			filtroRaiz= pow(b,2)-(4*a*c);
			if (filtroRaiz<0){
				cout<<"La raiz cuadrada no puedes ser negativa. \n";
				} else {
					x1= formulacuadraticaX1(a, b, c);
					x2= formulacuadraticaX2(a, b, c);
					//x1= (-b + sqrt(filtroRaiz)) / (2*a);
					//x2= (-b - sqrt(filtroRaiz)) / (2*a);
					
					cout<<"X1: "<<x1<<endl;
					cout<<"X2: "<<x2<<endl;
					}
				}
	system ("pause");	
}

void opcion2(){
	system ("cls");
	int numero, parImpar;
	
	cout<<"***********************************\n";
	cout<<"*  2. Par / Impar                 *\n";
	cout<<"***********************************\n";	
	
	cout<<"Ingrese numero: ";
	cin>>numero;
	
	parImpar=ParImparF(numero);
	if (parImpar==0){
		cout<<"\n";
		cout<<numero<<" es Par. "<<endl;
		cout<<"\n";
	} else{
		cout<<"\n";
		cout<<numero<<" es Impar. "<<endl;
		cout<<"\n";
	}
	
	system ("pause");
}

void opcion3(){
	system ("cls");
	double KG, gramos;
	
	cout<<"********************************************\n";
	cout<<"*  3. Convertir de Kilogramos a Gramos     *\n";
	cout<<"********************************************\n";	
	
	cout<<"Ingrese los kilogramos: ";
	cin>>KG;
	gramos=Kg_GrF(KG);
	cout<<"\n";
	cout<<KG<<" kilogramos son: "<<gramos<<" Gramos"<<endl;
	cout<<"\n";
	system ("pause");
}

void opcion4(){
	system ("cls");
	int libras, onzas;
	
	cout<<"***********************************\n";
	cout<<"*  4. Convertir de Libras a Onzas *\n";
	cout<<"***********************************\n";	
	
	cout<<"Ingrese las libras: ";
	cin>>libras;

	onzas=Lb_onzas(libras);
	cout<<"\n";
	cout<<libras<<" libras son: "<<onzas<<" Onzas"<<endl;
	cout<<"\n";
	system ("pause");	
}

int main(int argc, char** argv) {
	int opt; // = menu();
		//cout<<opt<<endl;
	
	while (opt!=5){
		opt = menu();
		
		switch(opt){
			
			case 1: 
				opcion1();
				break;
			case 2: 
				opcion2();
				break;
			case 3:  
				opcion3();
				break;
			case 4: 
				opcion4();
				break;
			case 5: 
			
				break;
			default: 
				cout<<"Opcion no valida"<<endl;
				cout<<"\n";
				system ("pause");
		}
		
	}
	
	return 0;
}
