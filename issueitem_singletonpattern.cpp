#include "issueitem_singletonpattern.h"

issueitem_singletonpattern::issueitem_singletonpattern()
{

}
issuelibItem *issueitem_singletonpattern::getMySystem(){

    if(mySystem==nullptr)
        mySystem=new issuelibItem;
    return mySystem;
}

issuelibItem *issueitem_singletonpattern:: mySystem = nullptr;
