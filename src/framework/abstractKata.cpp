#include "abstractKata.h"
#include <iostream>

bool AbstractKata::correctNumberOfParams (std::list<std::string> listOfArgs,int expectedArgCount, bool exactlyEqualTo){
        int numberOfArgs = listOfArgs.size();

        if(exactlyEqualTo){

            if(numberOfArgs != expectedArgCount){
                cout << endl << "incorrect numbers of args" << endl;
                return false;
            }

            return true;

        } else {
            if(numberOfArgs < expectedArgCount){
                cout << endl << "incorrect numbers of args" << endl;
                return false;
            }

            return true;
        }

}