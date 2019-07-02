#ifndef ADDKATA_H
#define ADDKATA_H

#include <string>
#include <list>
#include "abstractKata.h"

class AddKata : public AbstractKata{

    

    public:
        virtual void run(std::list<std::string> args);
        AddKata(){};
        virtual ~AddKata(){};
};


#else
#endif