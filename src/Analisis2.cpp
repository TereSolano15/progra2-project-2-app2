//
// Created by Fabio Villalobos on 8/11/2020.
//

#include "Analisis2.h"

string Analisis2::analisis(vector<Paciente> pacientes) {
    stringstream s;
    int posicion;
    int a = 0,c =0, t =0, g = 0;
    cout<<"Digite la posicion del paciente que desea valorar?"<<endl;
    cin>>posicion;
    for(int i=0; i< pacientes.size(); i++) {
        string cadena = pacientes.at(posicion).getSecuencia();
        if (cadena[i] == 'A') { a++; }
        if (cadena[i] == 'C') { c++; }
        if (cadena[i] == 'T') { t++; }
        if (cadena[i] == 'G') { g++; }
    }
    s<< "A - %"<<a;
    s<< "C - %"<<c;
    s<< "T - %"<<t;
    s<< "G - %"<<g;
    return s.str();
}

Analisis2::Analisis2() {}

Analisis2::~Analisis2() {

}
