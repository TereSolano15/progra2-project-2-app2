//
// Created by Tere Solano on 6/11/2020.
//

#ifndef MY_PROJECT_NAME_ANALISISSRATEGY_H
#define MY_PROJECT_NAME_ANALISISSRATEGY_H
#include <vector>
#include "ObjetoBase.h"
#include "Paciente.h"

class AnalisisSrategy {
public:
    virtual string analisis(Paciente) = 0;
    virtual ~AnalisisSrategy();
};


#endif //MY_PROJECT_NAME_ANALISISSRATEGY_H
