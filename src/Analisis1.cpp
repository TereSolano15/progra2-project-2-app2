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
    int contadorPaciente=0;
    int l=0;
    string secuencia= pacientes[l].getSecuencia();
    int tamanno = pacientes[l].getEnfermedadList().data()->getSecuencia().length();
    string enfermedad = pacientes.data()->getEnfermedadList().data()->getSecuencia();//pacientes[l].getEnfermedadList().data()->getSecuencia();
    int caracteresIguales = 0;
    for (int i = 0; secuencia[i] != '\0'; i++) {
        if (secuencia[i] == enfermedad[0]) {
            caracteresIguales = 0;
            for (int j = 0; enfermedad[j] != '\0' && secuencia[i + j] == enfermedad[j]; j++) {
                caracteresIguales++;
                if (caracteresIguales == tamanno) { //paciente tiene la enfermedad
                    l++;
                for (int k = 0; k < enfermedades.size(); k++) {
                    s << contadorPaciente << " pacientes tienen: " << enfermedades.at(k).getNombre() << endl;
                    contadorPaciente++;
                }
                }
            }
        }
    }
    return s.str();
}
