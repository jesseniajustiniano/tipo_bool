#include <iostream>
using namespace std;
//#define PI 3.14176; //defimos una constante llamada PI  

int main(int argc, char *argv[]) {
	const float PI = 3.1416;//definimos una constaste llamada PI
	double diametro, circunferencia;
	circunferencia=40;
	diametro=circunferencia/PI;
	cout<<"El diametrode la circunferencia=40:"<<diametro; // <<endl;
	//PI=0; //error por asignaci[on a una variable de solo lectura.
	
	return 0;
}

