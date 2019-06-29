#ifndef FROGSOLVER_H
#define FROGSOLVER_H


class FrogSolver
{
public:
    FrogSolver() {}
    FrogSolver(int num);//河墩的个数，要算青蛙个数的话，得减一
    ~FrogSolver();
    virtual void solve()=0;
protected:
    int _num;
};
#endif // FROGSOLVER_H
