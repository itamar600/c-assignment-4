#include "SniperCommander.hpp"
#include "Board.hpp"

void SniperCommander::power(void* b, int key){
    if(key!= ALLKEY)
        return;
    WarGame::Board* board;
    board=(WarGame::Board*) b;
    Soldier* s= board->findCostest(this->team);
    s->changeLife(DAMAGE);
    board->powerAll(this->team, SNIPERKEY);
}

void SniperCommander::changeLife(int num){
     if(num==FULLHEALTH)
        this->life=HEALTH;
    else
        this->life+=num;
}

void SniperCommander::setRow(int row){
    this->row=row;
}

void SniperCommander::setCol(int col){
    this->col=col;
}

int SniperCommander::getRow(){
    return this->row;
}

int SniperCommander::getCol(){
    return this->col;
}

int SniperCommander::getTeam(){
    return this->team;
}

int SniperCommander::getLife(){
    return this->life;
}

bool SniperCommander::isAlive(){
    if(this->life > 0)
        return true;
    return false;
}