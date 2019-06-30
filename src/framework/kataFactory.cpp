#include "kataFactory.h"
#include "testKata.h"
#include <iostream>

AbstractKata* KataFactory::getKata(string kataName) {

    if (kataName == "testkata"){
        return new TestKata();
    }
}
            
     

