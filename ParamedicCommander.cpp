#include "ParamedicCommander.hpp"
#include "Board.hpp"

void ParamedicCommander::power(void* b, int key){
    if(key!= ALLKEY)
        return;
    WarGame::Board* board;
    Soldier* temp;
    board=(WarGame::Board*) b;
    WarGame::Board myBoard=*board;
    int area[3]={1,0,-1};
    for(int i= 0; i< 3; i++){
        for(int j=0; j<3; j++){
            if(area[i]==0 && area[j]==0)
                continue;
            try{
                temp=myBoard[{(this->getRow()+area[i]),(this->getCol()+area[j])}];
                if(temp!= NULL && temp->isAlive() && temp->getTeam()==team)
                    temp->changeLife(FULLHEALTH);
            }
            catch(const std::invalid_argument& e){
                continue;
            }
        }
    }
    board->powerAll(this->team, PARAMEDICKEY);
}

void ParamedicCommander::changeLife(int num){
     if(num==FULLHEALTH)
        this->life=HEALTH;
    else
        this->life+=num;
}

void ParamedicCommander::setRow(int row){
    this->row=row;
}

void ParamedicCommander::setCol(int col){
    this->col=col;
}

int ParamedicCommander::getRow(){
    return this->row;
}

int ParamedicCommander::getCol(){
    return this->col;
}

int ParamedicCommander::getTeam(){
    return this->team;
}

int ParamedicCommander::getLife(){
    return this->life;
}

bool ParamedicCommander::isAlive(){
    if(this->life > 0)
        return true;
    return false;
}