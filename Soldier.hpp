#pragma once
//#include "Board.hpp"
#define ALLKEY 0
#define FOOTKEY 1
#define SNIPERKEY 2
#define PARAMEDICKEY 3
class Soldier{
    public:

    virtual void power(void* board, int key)=0;

    virtual void changeLife(int num)=0;

    virtual void setRow(int row)=0;

    virtual void setCol(int col)=0;

    virtual int getRow()=0;

    virtual int getCol()=0;

    virtual int getTeam()=0;

    virtual bool isAlive()=0;

    // virtual ~Soldier()=0;
};
// class Soldier{};