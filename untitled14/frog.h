#ifndef FROG_H
#define FROG_H

class Frog
{
public:
    Frog() {}
//    Frog(int num);
    Frog(int place);
    virtual void jump(int newplace)=0;
protected:
    virtual int frogType=0;
private:
    int crntplace;//现在位置
//    int num;

};

#endif // FROG_H
