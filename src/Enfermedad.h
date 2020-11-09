//
// Created by Tere Solano on 3/11/2020.
//

#ifndef MY_PROJECT_NAME_ENFERMEDAD_H
#define MY_PROJECT_NAME_ENFERMEDAD_H
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "ObjetoBase.h"

using namespace std;
class Enfermedad : public ObjetoBase{

private:
    string nombre;
    string secuencia;
    int cantidad;

public:

    Enfermedad();

    Enfermedad(const string &nombre, const string &secuencia);

    Enfermedad(istream& input);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getSecuencia() const;

    void setSecuencia(const string &secuencia);

    int getCantidad() const;

    void setCantidad(int cantidad);

    string toString() override;

};

#endif //MY_PROJECT_NAME_ENFERMEDAD_H
