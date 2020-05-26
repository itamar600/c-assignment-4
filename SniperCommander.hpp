#pragma once
#include "Soldier.hpp"
#define DAMAGE -100
#define HEALTH 120
class SniperCommander: public Soldier{
    int row, col, team, life;
    
    public:
    
    SniperCommander(int team){
        this->team= team;
        row=-1;
        col=-1;
        life= HEALTH;
    }

    void power(void* b, int key);

    void changeLife(int num);

    void setRow(int row);

    void setCol(int col);

    int getRow();

    int getCol();

    int getTeam();

    int getLife();
   
    bool isAlive();

    // ~SniperCommander(){
    //     delete(this);
    // }
};