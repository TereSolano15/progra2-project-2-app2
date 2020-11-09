//
// Created by Fabio Villalobos on 8/11/2020.
//

#ifndef MY_PROJECT_NAME_ANALISIS2_H
#define MY_PROJECT_NAME_ANALISIS2_H
#include "AnalisisSrategy.h"
#include "Enfermedad.h"
#include <stdio.h>
#include <string.h>


class Analisis2: public AnalisisSrategy{
public:
    Analisis2();

    string analisis(vector<Paciente>) override;

    virtual ~Analisis2();
};


#endif //MY_PROJECT_NAME_ANALISIS2_H
