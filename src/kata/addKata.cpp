#include "addKata.h"
#include <string>
#include <iostream>

void AddKata::run(std::list<std::string> args){

    if(!correctNumberOfParams(args,1,false)){
         return;
     }

    float currentTotal = 0;
    for (std::list<string>::iterator it=args.begin(); it != args.end(); ++it){
        currentTotal = currentTotal + convertToFloat(*it);
    }
    cout << endl << currentTotal << endl;
}
