//
// Created by Tere Solano on 6/11/2020.
//

#include "Analisis1.h"

Analisis1::Analisis1() {}

Analisis1::~Analisis1() {

}
/*
Análisis #1: Crear un reporte con todas las enfermedades que
muestre para cada una los pacientes que tienen susceptibilidad
de tenerla. Las enfermedades deben mostrarse ordenadas de mayor
a menor incidencia.*//*

*/
/*vector<ObjetoBase> Analisis1::analisis(Paciente paciente) {
string secuencia= paciente.getSecuencia();
int cantidad = 0;
    int tamanno = enfermedad.length();
    int caracteresIguales;
    for (int i = 0; secuencia[i] != '\0'; i++) {
        if (secuencia[i] == enfermedad[0]) {
            caracteresIguales = 0;
            for (int j = 0; enfermedad[j] != '\0' && secuencia[i + j] == enfermedad[j]; j++) {
                caracteresIguales++;
                if (caracteresIguales == tamanno) {
                    cantidad ++;

                }
            }
        }
    }
}*/

string Analisis1::analisis(Paciente paciente) {
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
