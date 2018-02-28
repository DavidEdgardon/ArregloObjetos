//
// Created by ASUS on 2/27/2018.
//

#ifndef ARREGLOOBJETO_INTEGER_H
#define ARREGLOOBJETO_INTEGER_H


#include "Objetos.h"

class Integer: public Objetos {
private:
    int valor;
public:
    Integer();
    Integer(int valor);
    ~Integer();

    virtual Tipo getTipo();
    virtual void Imprimir();
    int  getValor();
    void setValor(int valor);
};

#endif //ARREGLOOBJETO_INTEGER_H
