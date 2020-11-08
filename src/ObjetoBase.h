//
// Created by Tere Solano on 6/11/2020.
//

#ifndef MY_PROJECT_NAME_OBJETOBASE_H
#define MY_PROJECT_NAME_OBJETOBASE_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class ObjetoBase {
public:
    virtual ~ObjetoBase();

    virtual string toString()= 0;
};


#endif //MY_PROJECT_NAME_OBJETOBASE_H
