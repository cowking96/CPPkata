#include "abstractKata.h"
#include <iostream>
#include <cstdlib>
//#include <charconv>

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

float AbstractKata::convertToFloat(std::string stringToConvert){
    try{
        //stof is not a member of std:: - possible compiler bug per google in C++11?
        // didnt work in gcc5 but does work in gcc 6
        return(std::stof(stringToConvert));

        // works but uses C library, returns 0 for non numeric strings
        //return atof(stringToConvert.c_str());

        //trying c++ 17 
        //float result;
        //std::from_chars(stringToConvert.data(), stringToConvert.data()+stringToConvert.size(), result);

    } catch(...){
        cout << endl << "could not convert " << stringToConvert <<" to a string" << endl;
        exit(-1);
    }

}