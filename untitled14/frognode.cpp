#include"frognode.h"

FrogNode::FrogNode(int num):_state(num){

}

FrogNode::~FrogNode(){

}

FrogNode::FrogNode(const FrogNode &node):_state(node._state){

}

FrogNode::creatChild(int newplace, int newstone, Frog *frog){
    FrogNode child(*this);
    child._state.placeFrog(newplace,newstone,frog);
    return child;
}

FrogNode &FrogNode::getState(){
    return this->_state;
}
