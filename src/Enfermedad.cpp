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

int Enfermedad::getCantidad() const {
    return cantidad;
}

void Enfermedad::setCantidad(int cantidad) {
    Enfermedad::cantidad = cantidad;
}

string Enfermedad::toString() {
    stringstream s;

    s<<"enfermedad: " << getNombre();
    s <<" secuencia: " << getSecuencia() << endl;
    s <<"Paciente: " << getPaciente().getNombre()<<endl;

    return s.str();
}

const Paciente &Enfermedad::getPaciente() const {
    return paciente;
}

void Enfermedad::setPaciente(const Paciente &paciente) {
    Enfermedad::paciente = paciente;
}








