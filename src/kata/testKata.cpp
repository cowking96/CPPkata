#include "testKata.h"
#include <iostream>
 

 void TestKata::run(std::list<std::string> args){
     if(!correctNumberOfParams(args,0,true)){
         return;
     }
     
     cout << "test kata run" << endl;

}