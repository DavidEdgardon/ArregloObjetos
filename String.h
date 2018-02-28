//
// Created by ASUS on 2/27/2018.
//

#ifndef ARREGLOOBJETO_STRING_H
#define ARREGLOOBJETO_STRING_H

#include <iostream>
#include "Objetos.h"
using namespace std;

class String : public Objetos{
private:
    string valor;
public:
    String();
    String(string valor);
    ~String();

    virtual Tipo getTipo();
    virtual void Imprimir();
    string  getValor();
    void setValor(string valor);
};


#endif //ARREGLOOBJETO_STRING_H
