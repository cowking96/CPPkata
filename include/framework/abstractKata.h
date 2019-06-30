#ifndef ABSTRACTKATA_H
#define ABSTRACTKATA_H

#include <string>
#include <list>

using namespace std;

class AbstractKata{

    

    public:
        AbstractKata(){};
        ~AbstractKata(){};

        virtual void run(std::list<std::string> args) = 0;
    protected:
        bool correctNumberOfParams (std::list<std::string> listOfArgs,int expectedArgCount, bool exactlyEqualTo);
};
#else
#endif