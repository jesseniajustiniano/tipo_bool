#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//declaracion y uso de bool
	bool b0;
	b0=true;
	cout<<"variable con valor TRUE:"<<b0<<endl;
	b0=false;
	cout<<"variable con valor FALSE:"<<b0<<endl;
	//asignacion de valores numericos.
	//si es cero es FALSO, si diferente de cero en VERDADERO.
	b0=0; //el valor se vera con false
	cout<<"variable con el valor 0:"<<b0<<endl;
	b0=1; //el valor se vera como true.
	cout<<"variable con valor 1:"<<b0<<endl;
	b0=100; //el valor se vera como true.
	cout<<"variable con valor -100:"<<b0<<endl;
	return 0;
}

