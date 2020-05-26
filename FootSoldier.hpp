#pragma once
#include "Soldier.hpp"
#define DAMAGE 10
#define HEALTH 100
class FootSoldier: public Soldier{
    int row, col, team, life;

    public:
    
    FootSoldier(int team){
        this->team= team;
        row=-1;
        col=-1;
        life= HEALTH;
    }

    void power(void* board, int key);

    void changeLife(int num);

    void setRow(int row);

    void setCol(int col);

    int getRow();

    int getCol();

    int getTeam();
    
    bool isAlive();

    // ~FootSoldier(){
    //     delete(this);
    // }
};