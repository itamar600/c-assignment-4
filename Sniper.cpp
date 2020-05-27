#include "Sniper.hpp"
#include "Board.hpp"

void Sniper::power(void* b, int key){
    if(key!= SNIPERKEY && key!= ALLKEY)
        return;
    WarGame::Board* board;
    board=(WarGame::Board*) b;
    Soldier* s= board->findCostest(this->team);
    if (s==NULL)
        return;
    s->changeLife(DAMAGE);
}

void Sniper::changeLife(int num){
     if(num==FULLHEALTH)
        this->life=HEALTH;
    else
        this->life+=num;
}

void Sniper::setRow(int row){
    this->row=row;
}

void Sniper::setCol(int col){
    this->col=col;
}

int Sniper::getRow(){
    return this->row;
}

int Sniper::getCol(){
    return this->col;
}

int Sniper::getTeam(){
    return this->team;
}

int Sniper::getLife(){
    return this->life;
}

bool Sniper::isAlive(){
    if(this->life > 0)
        return true;
    return false;
}