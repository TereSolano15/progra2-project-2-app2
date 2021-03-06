//
// Created by Tere Solano on 6/11/2020.
//

#ifndef MY_PROJECT_NAME_ANALISIS1_H
#define MY_PROJECT_NAME_ANALISIS1_H
#include "AnalisisSrategy.h"
#include "Enfermedad.h"

class Analisis1 : public AnalisisSrategy {
public:
    Analisis1();

    string analisis(vector<Paciente>) override;

    vector<Enfermedad> readCsv2();

    virtual ~Analisis1();

};


#endif //MY_PROJECT_NAME_ANALISIS1_H
