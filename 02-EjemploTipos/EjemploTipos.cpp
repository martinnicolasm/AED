/*
*EjemploTipos
*Se muestra un ejemplo básico del uso de cada tipo de dato visto.
*Martín Martinez
*20180417
*/
#include <iostream>

using namespace std; //si no pongo esto, no puedo utilizar la variable string.

int main(){
	//Ejemplo del tipo de dato "int"
	int variable=-5;
	
	cout<<"El valor tipo entero de la variable es: "<<variable;
	
	//Ejemplo del tipo de dato "double"
	double variable1=1.88465;
	
	cout<<"\n\n\nEl valor tipo double de la variable es: "<<variable1;
	
	//Ejemplo del tipo de dato "char"
	char variable2='c';
	char variable3[30]="Cadena de caracteres";
	
	cout<<"\n\n\nEl valor tipo char de un caracter es: "<<variable2;
	cout<<"\n\nEl valor tipo char de una cadena de caracteres es: "<<variable3;
	
	//Ejemplo del tipo de dato bool
	bool variable4=true;
	bool variable5=false;
	
	cout<<"\n\n\nEl valor de la variable tipo bool verdadera es: "<<variable4;
	cout<<"\n\nEl valor de la variable tipo bool falsa es: "<<variable5;
	
	//Ejemplo del tipo de dato string
	string variable6="Cadena de caracteres con string";
	
	cout<<"\n\n\nEl valor de la variable de tipo string es: "<<variable6;
	cout<<"\n\nLongitud de la variable tipo string introducida (cantidad de caracteres): "<<variable6.length();
	cout<<"\n\nExtraccion de la primer palabra de la variable string: "<<variable6.substr(0, 6);
	
	//Ejemplo del tipo de dato unsigned
	unsigned int variable7=10;
	
	cout<<"\n\n\nEl valor tipo unsigned de la variable es: "<<variable7;
	cout<<"\n\n";
	
	
	
	
	system("pause");
}
