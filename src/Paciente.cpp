//
// Created by Tere Solano on 3/11/2020.
//

#include "Paciente.h"

Paciente::Paciente() {}



Paciente::Paciente(istream& input) {

    //preguntar mannana al profe, por el getline tiene problemas con, el int en el segundo dato por parametro



    //read the csv file until the character ',' and discards it
    getline(input, this->id, ',');
    getline(input, this->nombre, ',');
    getline(input, this->telefono, ',');
    getline(input, this->correo, ',');
    input >> this->secuencia; // read until line break but not discard
    input.ignore();

}


//sets and gets
const string Paciente::getId() const {
    return id;
}

void Paciente::setId(string id) {
    Paciente::id = id;
}

const string &Paciente::getNombre() const {
    return nombre;
}

void Paciente::setNombre(const string &nombre) {
    Paciente::nombre = nombre;
}

const string &Paciente::getTelefono() const {
    return telefono;
}

void Paciente::setTelefono(const string &telefono) {
    Paciente::telefono = telefono;
}

const string &Paciente::getCorreo() const {
    return correo;
}

void Paciente::setCorreo(const string &correo) {
    Paciente::correo = correo;
}

const string &Paciente::getSecuencia() const {
    return secuencia;
}

void Paciente::setSecuencia(const string &secuencia) {
    Paciente::secuencia = secuencia;
}

const std::vector<Enfermedad> &Paciente::getEnfermedadList() const {
    return enfermedadList;
}

void Paciente::setEnfermedadList(const std::vector<Enfermedad> &enfermedadList) {
    Paciente::enfermedadList = enfermedadList;
}

string Paciente::toString() {
    stringstream s;

    s<<"id: " << getId() << endl;
    s<<"nombre: " <<getNombre() << endl;
    s<<"telefono: " << getTelefono() << endl;
    s<<"correo: " << getCorreo() << endl;
    s<<"secuencia: " << getSecuencia() << endl;

    return s.str();
}

Paciente::Paciente(const string &id, const string &nombre, const string &telefono, const string &correo,
                   const string &secuencia, const vector<Enfermedad> &enfermedadList) : id(id), nombre(nombre),
                                                                                        telefono(telefono),
                                                                                        correo(correo),
                                                                                        secuencia(secuencia),
                                                                                        enfermedadList(
                                                                                                enfermedadList) {}

