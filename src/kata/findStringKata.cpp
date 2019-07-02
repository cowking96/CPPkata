#include "findStringKata.h"
#include <iostream>
 
 void FindStringKata::run(std::list<std::string> args){
     std::string stringToSearch = args.front();
     std::string stringToFind = args.back();

    if(!correctNumberOfParams(args,2,true)){
         return;
     }

     if(stringToSearch.find(stringToFind)){
         cout << "string " << stringToSearch << "contains: " << stringToFind <<endl;
     }
     else{
     
      cout << "string " << stringToSearch << " does not contain: " << stringToFind <<endl;
     }
}