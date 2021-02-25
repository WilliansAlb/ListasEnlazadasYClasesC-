#include "Numero.h"
#include <iostream>
using namespace std;

Numero::Numero(int id) {
    this->id = id;
    this->siguiente = NULL;
}

void Numero::imprimirNumero(){
    cout << "El numero es: " << id;
}

