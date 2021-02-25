#include <cstdlib>
#include "ListaEn.h"
#include <string>
#include <iostream>
typedef ListaEn* lis;
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    lis nue = new ListaEn();
    for (int i = 0; i < 10; i++){
        nue->ingresarNumero(i);
    }
    cout << "Numeros ingresados: "<<endl;
    nue->imprimirNumeros();
    cout << endl;
    cout << "Numero a eliminar: 2"<<endl;
    nue->eliminarNumero(2);
    cout << "Numeros ingresados luego de eliminar el 2"<<endl;
    nue->imprimirNumeros();
    cout << "\nLuego de eliminar ultimo\n";
    nue->eliminarUltimo();
    nue->imprimirNumeros();
    return 0;
}