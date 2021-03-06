//
// Created by Tere Solano on 6/11/2020.
//

#include "Analisis1.h"

Analisis1::Analisis1() {}

Analisis1::~Analisis1() {

}
vector<Enfermedad> Analisis1::readCsv2(){

    vector<Enfermedad> enfermedad_csv;

    ifstream in("C:\\Users\\Tere Solano\\CLionProjects\\progra2-project-02-lions\\archivos_csv\\enfermedades.csv", ios::in);
    try {
        if (in.good()) {

            while (!in.eof() && in.good()) {

                enfermedad_csv.push_back(Enfermedad(in));

            }//close while iterator

            in.close();

        }//close if condition
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }
    enfermedad_csv.erase(enfermedad_csv.begin());
    return enfermedad_csv;

}



string Analisis1::analisis(vector<Paciente> pacientes) {
    stringstream s;
    vector<Enfermedad> enfermedades = readCsv2();
    int k = 0;
    int contadorPaciente=0;
    for(int m=0; m<pacientes.size();m++) {
        string secuencia = pacientes[m].getSecuencia();
        int tamanno = pacientes[m].getEnfermedadList().data()->getSecuencia().length();
        string enfermedad = pacientes.data()->getEnfermedadList().data()->getSecuencia();
        int caracteresIguales = 0;
        for (int i = 0; secuencia[i] != '\0'; i++) {
            if (secuencia[i] == enfermedad[0]) {
                caracteresIguales = 0;
                for (int j = 0; enfermedad[j] != '\0' && secuencia[i + j] == enfermedad[j]; j++) {
                    caracteresIguales++;
                    if (caracteresIguales == tamanno) { //paciente tiene la enfermedad
                        contadorPaciente++;
                        k++;
                            s << m << " pacientes tienen: " << enfermedades[k].getNombre() << endl;
                    }
                }
            }
        }
    }
    return s.str();
}
