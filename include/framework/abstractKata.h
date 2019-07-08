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
        static int numberOfParams;
        static bool extactlyEqualTo;

    protected:
        bool correctNumberOfParams (std::list<std::string> listOfArgs,int expectedArgCount, bool exactlyEqualTo);
        float convertToFloat(std::string stringToConvert);
        int convertToInt (std::string stringToConvert);     
};
#else
#endif