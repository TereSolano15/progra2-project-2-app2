//
// Created by Tere Solano on 3/11/2020.
//

#include "Enfermedad.h"

Enfermedad::Enfermedad() = default;

Enfermedad::Enfermedad(const string &nombre, const string &secuencia) : nombre(nombre), secuencia(secuencia) {}


Enfermedad::Enfermedad(istream &input) {

    getline(input, this->nombre, ',');
    input >> this->secuencia;
    input.ignore();

}

const string &Enfermedad::getSecuencia() const {
    return secuencia;
}

void Enfermedad::setSecuencia(const string &secuencia) {
    Enfermedad::secuencia = secuencia;
}

const string &Enfermedad::getNombre() const {
    return nombre;
}

void Enfermedad::setNombre(const string &nombre) {
    Enfermedad::nombre = nombre;
}

string Enfermedad::toString() {
    stringstream s;

    s<<"enfermedad: " << getNombre();
    s <<" secuencia: " << getSecuencia() << endl;

    return s.str();
}






