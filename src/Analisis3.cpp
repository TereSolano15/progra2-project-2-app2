//
// Created by Fabio Villalobos on 8/11/2020.
//

#include "Analisis3.h"

string Analisis3::analisis(vector<Paciente> pacientes) {
    stringstream s;
    string secuencia= pacientes.data()->getSecuencia();
    string enfermedad = pacientes.data()->getEnfermedadList().data()->getSecuencia();
    int cantidad = 0;
    int tamanno = pacientes.data()->getEnfermedadList().data()->getNombre().length();
    int caracteresIguales;
    for (int i = 0; secuencia[i] != '\0'; i++) {
        if (secuencia[i] == enfermedad[0]) {
            caracteresIguales = 0;
            for (int j = 0; enfermedad[j] != '\0' && secuencia[i + j] == enfermedad[j]; j++) {
                caracteresIguales++;
                if (caracteresIguales == tamanno) {
                    cantidad++;
                }
                for(int k=0; k<pacientes.size();k++) {
                    if (cantidad > 0 && cantidad < 3) {
                        s << pacientes.at(k).getNombre() <<" Tiene 35% de posibilidad de padecer: " << enfermedad << endl;
                    } else {
                        s <<pacientes.at(k).getNombre()<< " Tiene 65% de posibilidad de padecer: " << enfermedad << endl;
                    }
                }
            }
        }
    }
    return s.str();
}



Analisis3::Analisis3() {}

Analisis3::~Analisis3() {

}
