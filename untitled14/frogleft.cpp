#include "frogleft.h"

frogleft::frogleft()
{

}

frogleft::frogleft(int place):Frog(place),LcrntPlace(place){

}

void frogleft::jump(int newplace){
    assert(newplace>LcrntPlace);
    LcrntPlace=newplace;
}
