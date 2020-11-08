//
// Created by Tere Solano on 6/11/2020.
//

#ifndef MY_PROJECT_NAME_ANALISIS1_H
#define MY_PROJECT_NAME_ANALISIS1_H
#include "AnalisisSrategy.h"
#include "Enfermedad.h"
#include "ObjetoBase.h"
#include <stdlib.h>
#include <stdio.h>

class Analisis1 : public AnalisisSrategy {
public:
    Analisis1();


    virtual vector<Paciente> analisis(Paciente);

    bool insertaOrdenado(Enfermedad);

    virtual ~Analisis1();

};


#endif //MY_PROJECT_NAME_ANALISIS1_H
