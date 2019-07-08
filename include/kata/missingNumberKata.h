#ifndef MISSINGNUMBERKATA_H
#define MISSINGNUMBERKATA_H

#include <string>
#include "abstractKata.h"

class MissingNumberKata : public AbstractKata{

    public:
        virtual void run(list<std::string> args);
        MissingNumberKata(){};
        virtual ~MissingNumberKata(){};
};

#else
#endif