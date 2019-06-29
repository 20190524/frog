#ifndef FROGLEFT_H
#define FROGLEFT_H
#include"frog.h"

class frogleft : public Frog
{
public:
    frogleft();
    frogleft(int place);
    void jump(int newplace);
protected:
    int  frogType=1;
private:
    int LcrntPlace;//青蛙现在位置
};

#endif // FROGLEFT_H
