#ifndef MARKETKATA_H
#define MARKETKATA_H

#include <string>
#include "abstractKata.h"

class MarketKata : public AbstractKata{

    public:
        virtual void run(std::list<std::string> args);
        MarketKata(){};
        virtual ~MarketKata(){};
};


#else
#endif