#ifndef ListaEn_H
#define ListaEn_H
#include <string>
#include "Numero.h"
class ListaEn {
public:
    ListaEn();
    Numero *inicio;
    void ingresarNumero(int);
    void imprimirNumeros();
    void eliminarNumero(int);
    void eliminarUltimo();
private:

};

#endif /* ListaEn_H */