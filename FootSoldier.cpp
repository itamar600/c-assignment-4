#include "FootSoldier.hpp"
#include "Board.hpp"

void FootSoldier::power(void* board, int key){

}

void FootSoldier::changeLife(int num){
    this->life+=num;
}

void FootSoldier::setRow(int row){
    this->row=row;
}

void FootSoldier::setCol(int col){
    this->col=col;
}

int FootSoldier::getRow(){
    return this->row;
}

int FootSoldier::getCol(){
    return this->col;
}

int FootSoldier::getTeam(){
    return this->team;
}

bool FootSoldier::isAlive(){
    if(this->life > 0)
        return true;
    return false;
}