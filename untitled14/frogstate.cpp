#include"frogstate.h"
#include"frog.h"

FrogState::FrogState(int num):frogNum(num-1),crntNull(num/2),_stoneNum(num){
    _stone=new int[_stoneNum];
    for(int i=0;i<_stoneNum;i++){
        _stone[i]=-1;
    }
    left=new frogleft[frogNum/2];
    for(int i=0;i<crntNull;i++){
        left[i]=left(i);
        _stone[i]=1;
    }
    right=new frogright[frogNum/2];
    for(int j=crntNull+1,k=0;j<_stoneNum,k<frogNum/2;j++,k++){
        right[k]=right(j);
        _stone[j]=2;
    }
}

FrogState::FrogState(FrogState &st){//左和右的青蛙要有位置坐标区别
    _stoneNum=st._stoneNum;
    frogNum=_stoneNum/2;
    _stone=new int[_stoneNum];
    for(int i=0;i<_stoneNum;i++){
        _stone[i]=-1;
    }
    crntNull=st.crntNull;
    left=new frogleft[frogNum/2];
    for(int j=0;j<crntNull;j++){
        left[j]=left(j);
        _stone[j]=1;
    }
    right=new frogright[frogNum/2];
    for(int k=crntNull+1,p=0;k<_stoneNum,p<frogNum/2;k++,p++){
        right[p]=right(k);
        _stone[k]=2;
    }
}

void FrogState::placeFrog(int newplace, int newStone, Frog* frog){
    frog->jump(newplace);
    _stone[newplace]=frog->frogType;
    crntNull=newStone;
    _stone[crntNull]=-1;
}


void FrogState::printState(){
    int l=0,r=0;
    for(int i=0;i<_stoneNum;i++){
        if(_stone[i]==1){
            cout<<"A"<<l<<" ";
            l++;
        }
        if(_stone[i]==2){
            cout<<"B"<<r<<" ";
            r++;
        }
        if(_stone[i]==-1){
            cout<<"C"<<" ";
        }
    }
}
