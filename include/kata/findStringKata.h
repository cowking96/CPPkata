#ifndef FINDSTRINGKATA_H
#define FINDSTRINGKATA_H

#include <string>
#include "abstractKata.h"

class FindStringKata : public AbstractKata{

    

    public:
        virtual void run(std::list<std::string> args);
        FindStringKata(){};
        virtual ~FindStringKata(){};
};


#else
#endif