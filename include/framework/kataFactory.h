#ifndef KATAFACTORY_H
#define KATAFACTORY_H

#include <string>
#include "abstractKata.h"

class KataFactory {

    KataFactory(){}
    ~KataFactory(){}

    public: 
    static AbstractKata* getKata(std::string kataName);
};
#else
#endif