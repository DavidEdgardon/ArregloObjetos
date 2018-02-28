//
// Created by ASUS on 2/27/2018.
//

#include <iostream>
#include "Char.h"


Char::Char(char v) {
    setValor(v);
}

Char::~Char(){
    std::cout<<"BOOM";
}

char Char::getValor() {
    return valor;
}
void Char::setValor(char valor){
     Char::valor=valor;
}

virtual Tipo Char::getTipo() {
    Tipo n=T_Char;
    return n;
}

virtual void Char::Imprimir() {
    std::cout<<"Valor: " <<getValor()<<std::endl;
    std::cout<<"Tipo: " <<getTipo()<<std::endl;

}