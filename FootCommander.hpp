#pragma once
#include "Soldier.hpp"
class FootCommander: public Soldier{
    int row, col, team;
    
    public:
    
    FootCommander(int team){
        this->team= team;
        row=-1;
        col=-1;
    }

    void power(void* board, int key);

    void changeLife(int num);

    void setRow(int row);

    void setCol(int col);

    int getRow();

    int getCol();

    int getTeam();
};