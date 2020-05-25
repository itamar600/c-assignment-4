#pragma once
//#include "Board.hpp"
class Soldier{
    public:
    
    virtual void power(void* board, int key);

    virtual void changeLife(int num);

    virtual void setRow(int row);

    virtual void setCol(int col);

    virtual int getRow();

    virtual int getCol();

    virtual int getTeam();
};
// class Soldier{};