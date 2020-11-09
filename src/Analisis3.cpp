//
// Created by Fabio Villalobos on 8/11/2020.
//

#include "Analisis3.h"

string Analisis3::analisis(Paciente paciente) {
    string secuencia= paciente.getSecuencia();
    int cantidad = 0;
    int tamanno = paciente.getEnfermedadList().data()->getNombre().length();
    string enfermedad = paciente.getEnfermedadList().data()->getNombre();
    int caracteresIguales;
    vector<Paciente> listaEnfermedad;
    vector<string> listaSecuencias;
    listaSecuencias.push_back(paciente.getSecuencia());

    for (int i = 0; secuencia[i] != '\0'; i++) {
        if (secuencia[i] == enfermedad[0]) {
            caracteresIguales = 0;
            for (int j = 0; enfermedad[j] != '\0' && secuencia[i + j] == enfermedad[j]; j++) {
                caracteresIguales++;
                if (caracteresIguales == tamanno) {
                    cantidad++;
                    Enfermedad enfe = paciente.getEnfermedadList().at(j);
                    enfe.setCantidad(cantidad);
                }
                if(listaEnfermedad.at(j).getEnfermedadList().at(j).getCantidad() < listaEnfermedad.at(j+1).getEnfermedadList().at(j+1).getCantidad()){
                    listaEnfermedad.push_back(listaEnfermedad.at(j+1));
                }
            }
        }
    }
    return listaEnfermedad.data()->toString();
}


Analisis3::Analisis3() {}

Analisis3::~Analisis3() {

}
