#include "FootSoldier.hpp"
#include "Board.hpp"

void FootSoldier::power(void* b, int key){
    if(key!= FOOTKEY && key!= ALLKEY)
        return;
    WarGame::Board* board;
    board=(WarGame::Board*) b;
    Soldier* s= board->findClosest(this->team, this->row, this->col);
    s->changeLife(DAMAGE);
}

void FootSoldier::changeLife(int num){
     if(num==FULLHEALTH)
        this->life=HEALTH;
    else
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

int FootSoldier::getLife(){
    return this->life;
}

bool FootSoldier::isAlive(){
    if(this->life > 0)
        return true;
    return false;
}