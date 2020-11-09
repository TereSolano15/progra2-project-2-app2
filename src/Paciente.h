//
// Created by Tere Solano on 3/11/2020.
//

#ifndef MY_PROJECT_NAME_PACIENTE_H
#define MY_PROJECT_NAME_PACIENTE_H
#include "ObjetoBase.h"
#include <istream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include "Enfermedad.h"
#include <fstream>
using namespace std;

class Paciente: public ObjetoBase{

private:

    string id;
    string nombre;
    string telefono;
    string correo;
    string secuencia;
    std::vector<Enfermedad> enfermedadList;

public:
    Paciente();

    Paciente(const string &id, const string &nombre, const string &telefono, const string &correo,
             const string &secuencia, const vector<Enfermedad> &enfermedadList);

    Paciente(istream& input);

    const string getId() const;

    void setId(string id);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getTelefono() const;

    void setTelefono(const string &telefono);

    const string &getCorreo() const;

    void setCorreo(const string &correo);

    const string &getSecuencia() const;

    void setSecuencia(const string &secuencia);

    const std::vector<Enfermedad> &getEnfermedadList() const;

    void setEnfermedadList(const std::vector<Enfermedad> &enfermedadList);

    string toString() override;

};

#endif //MY_PROJECT_NAME_PACIENTE_H
