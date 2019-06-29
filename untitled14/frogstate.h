#ifndef FROGSTATE_H
#define FROGSTATE_H
#include"frog.h"
#include"frogleft.h"
#include"frogright.h"
class FrogState
{
public:
    FrogState() {}
    FrogState(int num);
    FrogState(FrogState &st);
    bool isTarget();
    void placeFrog(int newplace,int newStone,Frog &frog);//新的河墩，新的青蛙位置，是否考虑青蛙种类？
    void printState();
private:
    int *_stone;
    int _stoneNum;
    int crntNull;//空河墩位置
    frogleft *left;
    frogright *right;
    int frogNum;
};


#endif // FROGSTATE_H
