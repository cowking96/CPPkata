#ifndef TESTKATA_H
#define TESTKATA_H

#include <string>
#include <list>
#include "abstractKata.h"

class TestKata : public AbstractKata{

    

    public:
        virtual void run(std::list<std::string> args);
        TestKata(){};
        virtual ~TestKata(){};
};


#else
#endif