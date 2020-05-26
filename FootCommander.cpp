#include "FootCommander.hpp"
#include "Board.hpp"


void FootCommander::power(void* b, int key){
    if(key!= ALLKEY)
        return;
    WarGame::Board* board;
    board=(WarGame::Board*) b;
    Soldier* s= board->findClosest(this->team, this->row, this->col);
    s->changeLife(-DAMAGE);
    board->powerAll(this->team, FOOTKEY);

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

int FootCommander::getLife(){
    return this->life;
}

bool FootCommander::isAlive(){
    if(this->life > 0)
        return true;
    return false;
}