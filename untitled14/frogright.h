#ifndef FROGRIGHT_H
#define FROGRIGHT_H
#include"frog.h"

class frogright : public Frog
{
public:
    frogright();
    frogright(int place);
    void jump(int newplace);
protected:
    int frogType=2;
private:
    int RcrntPlace;//现在青蛙位置
};

#endif // FROGRIGHT_H
