//
// Created by Fabio Villalobos on 8/11/2020.
//

#include "Analisis2.h"

void Analisis2::vaciar(int array[]){

    for(int i=0;i<5;i++){
        array[i]=0;
    }
}


string Analisis2::analisis(vector<Paciente> pacientes) {
    stringstream s;
    string cadena=pacientes.data()->getSecuencia();
    string adn="ACGT ";
    int incidencias[4];
    vaciar(incidencias);

    for(int numeroPalabra=0;true;numeroPalabra++){
        vaciar(incidencias);

        if(cadena=="FIN"){break;}


        for(int i=0;cadena[i]!='\0';i++)
        {

            for(int j=0;j<5;j++)
            {

                if(cadena[i]==adn[j]){incidencias[j]++;}
            }
        }

        for(int i=0;i<5;i++)
        {

            if(incidencias[i]>0)
            {

                s<<adn[i]<<" "<<incidencias[i]<<" %"<<endl;
            }
        }
    }
    return s.str();
}

Analisis2::Analisis2() {}

Analisis2::~Analisis2() {

}
