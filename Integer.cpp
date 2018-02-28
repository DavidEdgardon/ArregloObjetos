//
// Created by ASUS on 2/27/2018.
//
#include <iostream>
#include "Integer.h"

Integer::Integer(int v) {
    setValor(v);
}

Integer::~Integer() {
    std::cout<<"BOOM";
}
int Integer::getValor() {
    return valor;
}
void Integer::setValor(int valor){
    Integer::valor=valor;
}

virtual void Integer::Imprimir() {
    std::cout<<"Valor: " <<getValor()<<std::endl;

}

virtual Tipo Integer::getTipo() {
    Tipo n=T_Int;
    return n;
}