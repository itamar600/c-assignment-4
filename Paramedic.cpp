#include "Paramedic.hpp"
#include "Board.hpp"

void Paramedic::power(void* b, int key){
    if(key!= ALLKEY && key!= PARAMEDICKEY)
        return;
    WarGame::Board* board;
    Soldier* temp;
    board=(WarGame::Board*) b;
    int area[3]={1,0,-1};
    for(int i= 0; i< 3; i++){
        for(int j=0; j<3; j++){
            if(area[i]==0 && area[j]==0)
                continue;
            try{
                temp=(*board)[{(this->getRow()+area[i]),(this->getCol()+area[j])}];
                if(temp!= NULL && temp->isAlive() && temp->getTeam()==team)
                    temp->changeLife(FULLHEALTH);
            }
            catch(std::exception e){
                continue;
            }
        }
    }
}

void Paramedic::changeLife(int num){
    if(num==FULLHEALTH)
        this->life=HEALTH;
    else
        this->life+=num;
}

void Paramedic::setRow(int row){
    this->row=row;
}

void Paramedic::setCol(int col){
    this->col=col;
}

int Paramedic::getRow(){
    return this->row;
}

int Paramedic::getCol(){
    return this->col;
}

int Paramedic::getTeam(){
    return this->team;
}

int Paramedic::getLife(){
    return this->life;
}

bool Paramedic::isAlive(){
    if(this->life > 0)
        return true;
    return false;
}