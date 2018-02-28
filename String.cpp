//
// Created by ASUS on 2/27/2018.
//

#include "String.h"
String::String(){
    valor=" ";
}


String::String(string v) {
   setValor(v);
}

String::~String(){
    std::cout<<"BOOM";
}

string String::getValor() {
    return valor;
}
void String::setValor(string valor){
    String::valor=valor;
}

virtual Tipo String::getTipo() {
    Tipo n=T_String;
    return n;
}

virtual void String::Imprimir() {
    std::cout<<"Valor: " <<getValor()<<std::endl;
    std::cout<<"Tipo: " <<getTipo()<<std::endl;

}