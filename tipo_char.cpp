#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//definicion y asignacion de valores char 
	char letra; 
	char vocal_may, vocal_min;
	letra='L';
	cout<<"Imprimiendo letra 'L':"<<letra<<endl;
	//letra="LL";//error por asingar mas de un caracter 
	//asingnado valores numericos.
	letra=65;//ASCII ES LA LETRA A.
	cout<<"imprimiendo ASCCI '65':"<<letra<<endl;
	//MPRIMIR EN CODIGO ASCII LAS VOCALES MAY Y MIN CON ACENTOS
	// Á, á, É, é, Í, í,...
	vocal_may=183; //ASCII es la letra Á
	vocal_min=160; //ASCII es la letra á
	cout<<"imprimiendo ASCII 'á':"<<vocal_may<<".."<<vocal_min<<endl;
	vocal_may=144; //ASCII es la letra Á
	vocal_min=1300; //ASCII ES LA LETRA á
	
	letra=92;
	cout<<"imprimiendo la letra '\':"<<letra<<endl;
	//declaracion de una cadena de caracteres
	char nombre[]="JESSENIA";
	
	cout<<"imprimiendo el nombre '\':"<<nombre<<endl;
	cout<<"imprimiendo nombre[0] '\':"<<nombre[0]<<endl;
	cout<<"imprimiendo nombre[1] '\':"<<nombre[1]<<endl;
	cout<<"imprimiendo nombre[2] '\':"<<nombre[2]<<endl;
	cout<<"imprimiendo nombre[3] '\':"<<nombre[3]<<endl;
	cout<<"imprimiendo nombre[4] '\':"<<nombre[4]<<endl;
	cout<<"imprimiendo nombre[5] '\':"<<nombre[5]<<endl;
	cout<<"imprimiendo nombre[6] '\':"<<nombre[6]<<endl;
	cout<<"imprimiendo nombre[7] '\':"<<nombre[7]<<endl;
	return 0;
}

