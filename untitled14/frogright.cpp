
#include "frogright.h"
#include<cassert>
frogright::frogright()
{

}

frogright::frogright(int place):Frog(place),RcrntPlace(place){

}

void frogright::jump(int newplace){
    assert(RcrntPlace>newplace);
    RcrntPlace=newplace;
}

