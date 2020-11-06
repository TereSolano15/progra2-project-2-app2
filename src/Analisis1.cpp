//
// Created by Tere Solano on 6/11/2020.
//

#include "Analisis1.h"

Analisis1::Analisis1() {}

Analisis1::~Analisis1() {

}
vector<ObjetoBase> Analisis1::analisis(Paciente paciente) {

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
}
