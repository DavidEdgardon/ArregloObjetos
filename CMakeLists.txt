cmake_minimum_required(VERSION 3.7)
project(ArregloObjeto)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Objetos.cpp Objetos.h Integer.cpp Integer.h String.cpp String.h Char.cpp Char.h)
add_executable(ArregloObjeto ${SOURCE_FILES})