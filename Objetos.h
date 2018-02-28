//
// Created by ASUS on 2/27/2018.
//

#ifndef ARREGLOOBJETO_OBJETOS_H
#define ARREGLOOBJETO_OBJETOS_H

#include <cstring>

enum Tipo{T_Char, T_String,T_Int};

class Objetos {
public :
    virtual Tipo getTipo();
    virtual void Imprimir();
};


#endif //ARREGLOOBJETO_OBJETOS_H
