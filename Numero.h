#ifndef Numero_H
#define Numero_H
#include <string>
class Numero {
public:
    Numero(int);
    int id;
    Numero *siguiente;
    void imprimirNumero();
private:

};

#endif /* Numero_H */