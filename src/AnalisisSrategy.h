//
// Created by Tere Solano on 6/11/2020.
//

#ifndef MY_PROJECT_NAME_ANALISISSRATEGY_H
#define MY_PROJECT_NAME_ANALISISSRATEGY_H
#include <vector>
#include "Paciente.h"

class AnalisisSrategy {
public:

    virtual string analisis(vector<Paciente>) = 0;

    virtual ~AnalisisSrategy();
};


#endif //MY_PROJECT_NAME_ANALISISSRATEGY_H
