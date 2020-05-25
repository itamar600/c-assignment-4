#pragma once
#include "Soldier.hpp"
#define FOOTKEY 1
class FootSoldier: public Soldier{
    int row, col, team;

    public:
    
    FootSoldier(int team){
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