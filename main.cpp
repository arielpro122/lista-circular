///Ariel Humberto Valle Escoto, 08 de diciembre del 2021.
#include <iostream>
#include "listadoble.h"

using namespace std;

int main( ) {
	listadoble<int> enteros;
	
	enteros.pushfront(10);
	enteros.pushfront(5);
	enteros.pushfront(1); 
	
	enteros << 7 << 5 << 1;
	
	cout << endl << "El tamano 1 es: "<< enteros.size() << endl << endl;
	
	enteros.print();
	cout << "Remover si hay algun 1" << endl;
	enteros.remove_if(1); 

    cout << endl << "El tamano 2 es: "<< enteros.size() << endl << endl;

    enteros.print();  
	
	enteros.~listadoble();
	
}
