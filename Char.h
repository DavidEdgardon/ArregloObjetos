//
// Created by ASUS on 2/27/2018.
//

#ifndef ARREGLOOBJETO_CHAR_H
#define ARREGLOOBJETO_CHAR_H


#include "Objetos.h"

class Char : public Objetos{
private:
char valor;
public:
Char(char valor);
~Char();

virtual Tipo getTipo();
virtual void Imprimir();
char  getValor();
void setValor(char valor);
};


#endif //ARREGLOOBJETO_CHAR_H
