//
// Created by Fabio Villalobos on 8/11/2020.
//

#include "Analisis2.h"

void Analisis2::vaciar(int array[])
{

    for(int i=0;i<5;i++)
    {

        array[i]=0;
    }
}


string Analisis2::analisis(Paciente paciente) {
    stringstream s;
    string secuencia= paciente.getSecuencia();


    string cadena=paciente.getSecuencia();
    string adn="ACGT ";
    int incidencias[4];
    vaciar(incidencias);


    for(int numeroPalabra=0;true;numeroPalabra++)
    {
        vaciar(incidencias);

        if(cadena=="FIN"){break;}


        for(int i=0;cadena[i]!='\0';i++)
        {

            for(int j=0;j<5;j++)
            {

                if(cadena[i]==adn[j]){incidencias[j]++;}
            }
        }

        s<<endl<<"Palabra numero "<<numeroPalabra<<endl;


        for(int i=0;i<5;i++)
        {

            if(incidencias[i]>0)
            {

                s<<"La letra "<<adn[i]<<" se uso "<<incidencias[i]<<" veces "<<endl;
            }
        }
    }
    return s.str();
}







Analisis2::Analisis2() {}

Analisis2::~Analisis2() {

}
