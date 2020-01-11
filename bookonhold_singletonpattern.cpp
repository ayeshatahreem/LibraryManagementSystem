#include "bookonhold_singletonpattern.h"

bookOnHold_singletonpattern::bookOnHold_singletonpattern()
{

}


OnHold *bookOnHold_singletonpattern::getMySystem(){

    if(mySystem==nullptr)
        mySystem=new OnHold;
    return mySystem;
}

OnHold *bookOnHold_singletonpattern:: mySystem = nullptr;
