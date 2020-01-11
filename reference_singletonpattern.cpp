#include "reference_singletonpattern.h"

reference_singletonpattern::reference_singletonpattern()
{

}
Reference *reference_singletonpattern::getMySystem(){

    if(mySystem==nullptr)
        mySystem=new Reference;
    return mySystem;
}

Reference *reference_singletonpattern:: mySystem = nullptr;
