#include "kataFactory.h"
#include "testKata.h"
#include "addKata.h"
#include <iostream>

AbstractKata* KataFactory::getKata(string kataName) {

    if (kataName == "testkata"){
        return new TestKata();
    }

    if (kataName == "addkata"){
        return new AddKata();
    }

    else{
        cout << endl << "no kata matches that name" << endl;
    }
}
            
     

