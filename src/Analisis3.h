//
// Created by Fabio Villalobos on 8/11/2020.
//

#ifndef MY_PROJECT_NAME_ANALISIS3_H
#define MY_PROJECT_NAME_ANALISIS3_H
#include "AnalisisSrategy.h"
#include "Enfermedad.h"

class Analisis3 : public AnalisisSrategy{
public:

    Analisis3();

    string analisis(vector<Paciente>) override;

    virtual ~Analisis3();
};


#endif //MY_PROJECT_NAME_ANALISIS3_H
