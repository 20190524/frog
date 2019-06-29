#ifndef FROGNOTE_H
#define FROGNOTE_H
#include"frogstate.h"
#include"frog.h"
class FrogNode
{
public:
    FrogNode() {}
    FrogNode(int num);
    ~FrogNode();
    FrogNode(const FrogNode &node);
    FrogNode creatChild(int newplace,int newstone,Frog*frog);
    FrogState &getState();
private:
    FrogState _state;
};

#endif // FROGNOTE_H
