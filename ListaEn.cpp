#include "ListaEn.h"
#include <iostream>
using namespace std;

ListaEn::ListaEn() {
    this->inicio = NULL;
}

void ListaEn::ingresarNumero(int number){
    Numero *nuevo = new Numero(number);
    if (inicio==NULL){
        inicio = nuevo;
    } else {
        Numero *aux = inicio;
        while (aux->siguiente != NULL){
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
    }
}

void ListaEn::imprimirNumeros(){
    Numero *temp = inicio;
    do{
        cout << temp->id << endl;
        temp = temp->siguiente;
    } while (temp!=NULL);
}

void ListaEn::eliminarNumero(int num){
    Numero *temp = inicio;
    while(temp->siguiente!=NULL){
        if ((temp->siguiente)->id == num){
            Numero *aux = temp->siguiente;
            temp->siguiente = aux->siguiente;
            free(aux);
            break;
        } else {
            temp = temp->siguiente;
        }
    }
}

void ListaEn::eliminarUltimo(){
    Numero *temp = inicio;
    while(temp->siguiente!=NULL){
        if ((temp->siguiente)->siguiente == NULL){
            Numero *aux = temp->siguiente;
            temp->siguiente = aux->siguiente;
            free(aux);
            break;
        } else {
            temp = temp->siguiente;
        }
    }
}
