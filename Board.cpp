#include "Board.hpp"
using namespace WarGame;

static int count=0;
Soldier*& Board::operator[](std::pair<int,int> location){
    Soldier* x=NULL;
    return x;
}

Soldier* Board::operator[](std::pair<int,int> location) const{
    Soldier* x=NULL;
    return x;
}

void Board::move(uint player_number, std::pair<int,int> source, Board::MoveDIR direction){

}

bool Board::has_soldiers(uint player_number) const{
    if(count%2==0){
        count++;
        return false;
    }
    else{
        count++; 
        return true;
    }
}
