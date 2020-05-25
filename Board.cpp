#include "Board.hpp"
#define ALLKEY 0
#define FOOTKEY 1
#define SNIPERKEY 2
#define PARAMEDICKEY 3
using namespace WarGame;

static int count=0;
Soldier*& Board::operator[](std::pair<int,int> location){
    // Soldier* x=NULL;
    // return x;
    return board[location.first][location.second];
}

Soldier* Board::operator[](std::pair<int,int> location) const{
    // Soldier* x=NULL;
    // return x;
    return board[location.first][location.second];
}

void Board::move(uint player_number, std::pair<int,int> source, Board::MoveDIR direction){
    int x= source.first;
    int y=source.second;
    Soldier* temp = board[x][y];
    if(temp==NULL)
        throw std::invalid_argument(" ");
    if(temp->getTeam()!=player_number)
        throw std::invalid_argument(" ");
    switch(direction){
        case Up:
        if(x+1==board[0].size() ||  board[x+1][y]!=NULL)
            throw std::invalid_argument(" ");
        board[x+1][y]=temp;
        board[x][y]=NULL;
        temp->setRow(x+1);
        temp->power(&board,ALLKEY);
        break;
       
        case Down:
        if(x-1< 0 ||  board[x-1][y]!=NULL)
            throw std::invalid_argument(" ");
        board[x-1][y]=temp;
        board[x][y]=NULL;
        temp->setRow(x-1);
        temp->power(&board,ALLKEY);
        break;

        case Right:
        if(y+1==board.size() ||  board[x][y+1]!=NULL)
            throw std::invalid_argument(" ");
        board[x][y+1]=temp;
        board[x][y]=NULL;
        temp->setRow(y+1);
        temp->power(&board,ALLKEY);
        break;

        case Left:
        if(y-1<0 ||  board[x][y-1]!=NULL)
            throw std::invalid_argument(" ");
        board[x][y-1]=temp;
        board[x][y]=NULL;
        temp->setRow(y-1);
        temp->power(&board,ALLKEY);
        break;
    }
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
