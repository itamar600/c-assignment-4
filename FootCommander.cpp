#include "FootCommander.hpp"
#include "Board.hpp"


void FootCommander::power(void* board, int key){

}


void FootCommander::changeLife(int num){
    this->life+=num;
}

void FootCommander::setRow(int row){
    this->row=row;
}

void FootCommander::setCol(int col){
    this->col=col;
}

int FootCommander::getRow(){
    return this->row;
}

int FootCommander::getCol(){
    return this->col;
}

int FootCommander::getTeam(){
    return this->team;
}

bool FootCommander::isAlive(){
    if(this->life > 0)
        return true;
    return false;
}