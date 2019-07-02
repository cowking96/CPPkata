#include "kataFactory.h"
#include "testKata.h"
#include "addKata.h"
#include "findStringKata.h"
#include "jumpingNumberKata.h"
#include <iostream>

AbstractKata* KataFactory::getKata(string kataName) {

    if (kataName == "testkata"){
        return new TestKata();
    }

    if (kataName == "addkata"){
        return new AddKata();
    }

    if (kataName == "findstringkata"){
        return new FindStringKata();
    }

    if (kataName == "jumpingnumberkata"){
        return new JumpingNumberKata();
    }

    else{
        cout << endl << "no kata matches that name" << endl;
    }
}
            
     

