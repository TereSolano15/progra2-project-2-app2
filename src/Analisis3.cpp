//
// Created by Fabio Villalobos on 8/11/2020.
//

#include "Analisis3.h"

string Analisis3::analisis(Paciente paciente) {
    stringstream s;
    string secuencia= paciente.getSecuencia();
    string enfermedad = paciente.getEnfermedadList().data()->getNombre();
    int cantidad = 0;
    int tamanno = paciente.getEnfermedadList().data()->getNombre().length();
    int caracteresIguales;
    for (int i = 0; secuencia[i] != '\0'; i++) {
        if (secuencia[i] == enfermedad[0]) {
            caracteresIguales = 0;
            for (int j = 0; enfermedad[j] != '\0' && secuencia[i + j] == enfermedad[j]; j++) {
                caracteresIguales++;
                if (caracteresIguales == tamanno) {
                    cantidad++;
                }
                if(0 < cantidad < 3 ){
                    s<<"Tiene 35% de posibilidad de padecer: "<<enfermedad<<endl;
                }
                else{
                    s<<"Tiene 65% de posibilidad de padecer: "<<enfermedad<<endl;
                }
            }
        }
    }
    return s.str();
}



Analisis3::Analisis3() {}

Analisis3::~Analisis3() {

}
