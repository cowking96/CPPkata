#ifndef JUMPINGNUMBERKATA_H
#define JUMPINGNUMBERKATA_H

#include <string>
#include "abstractKata.h"

class JumpingNumberKata : public AbstractKata{

    

    public:
        virtual void run(std::list<std::string> args);
        JumpingNumberKata(){};
        virtual ~JumpingNumberKata(){};
};


#else
#endif