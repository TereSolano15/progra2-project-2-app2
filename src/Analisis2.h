//
// Created by Fabio Villalobos on 8/11/2020.
//

#ifndef MY_PROJECT_NAME_ANALISIS2_H
#define MY_PROJECT_NAME_ANALISIS2_H
#include "AnalisisSrategy.h"
#include "Enfermedad.h"
#include "ObjetoBase.h"
#include <stdlib.h>
#include <stdio.h>

class Analisis2: public AnalisisSrategy{
public:
    Analisis2();
    virtual vector<Paciente> analisis(Paciente);

    virtual ~Analisis2();
};


#endif //MY_PROJECT_NAME_ANALISIS2_H