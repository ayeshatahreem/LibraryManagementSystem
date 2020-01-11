#include "available_singletonpattern.h"

available_singletonpattern::available_singletonpattern()
{

}

available *available_singletonpattern::getMySystem(){

    if(mySystem==nullptr)
        mySystem=new available;
    return mySystem;
}

available *available_singletonpattern:: mySystem = nullptr;

