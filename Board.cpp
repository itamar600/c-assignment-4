#include "Board.hpp"
#include <cmath>
using namespace WarGame;

// static int count=0;
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

bool Board::has_soldiers(uint player_number){
    // if(count%2==0){
    //     count++;
    //     return false;
    // }
    // else{
    //     count++; 
    //     return true;
    // }
    Soldier* temp;
    for(int i=0; i< board.size(); i++){
        for(int j=0; j< board[0].size(); j++){
            if(board[i][j]!=NULL){
                temp= board[i][j];
                if(temp->isAlive()){
                    if(temp->getTeam()==player_number)
                        return true;
                }
                else{
                    board[i][j]=NULL;
                    delete(temp); 
                }
            }
        }
    }
    return false;
}

Soldier* Board::findClosest(uint player_number, uint placeRow,uint placeCol ){
    Soldier* closest=NULL;
    Soldier* temp=NULL;
    int distT=0, distC=0;
    for(int i=0; i< board.size(); i++){
        for(int j=0; j< board[0].size(); j++){
            if(i==placeRow && j==placeCol)
                continue;
            if(board[i][j]!=NULL){
                temp= board[i][j];
                distT=sqrt(pow(temp->getRow()-placeRow,2)+pow(temp->getCol()-placeCol,2));
                if(temp->isAlive()){
                    if(temp->getTeam()!=player_number){
                        if(closest==NULL){
                            closest=temp;
                            distC=distT;
                        }
                        else {
                            if(distT<distC){
                                closest=temp;
                                distC=distT; 
                            }
                        }
                    }
                }
                else{
                    board[i][j]=NULL;
                    delete(temp); 
                }
            }
        }
    }
    return closest;
}

Soldier* Board::findCostest(uint player_number){
    Soldier* costest=NULL;
    Soldier* temp;
    for(int i=0; i< board.size(); i++){
        for(int j=0; j< board[0].size(); j++){
            if(board[i][j]!=NULL){
                temp= board[i][j];
                if(temp->isAlive()){
                    if(temp->getTeam()!=player_number){
                        if(costest==NULL)
                            costest=temp;
                        else if(costest->getLife()<temp->getLife())
                                costest=temp;
                    }
                }
                else{
                    board[i][j]=NULL;
                    delete(temp); 
                }
            }
        }
    }
    return costest;
}
    
void Board::powerAll(int player_number, int key){
    for(int i=0; i< board.size(); i++){
        for(int j=0; j< board[0].size(); j++){
            if(board[i][j]!=NULL){
                Soldier* temp= board[i][j];
                if(temp->isAlive()){
                    if(temp->getTeam()==player_number)
                    temp->power(this, key);
                }
                else{
                    board[i][j]=NULL;
                    delete(temp); 
                }
            }
        }
    }
}


