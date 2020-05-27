#include "doctest.h"
#include "Board.hpp"
#include "FootCommander.hpp"
#include "FootSoldier.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"
#include <string>
#include <iostream>
using namespace std;
using namespace WarGame;

TEST_CASE("Basic has_soldiers") {
    WarGame::Board board( 8,  8);
    CHECK(board.has_soldiers(1)==false);
    //CHECK_THROWS_AS(!board.has_soldiers(2), std::exception);
	board[{0,1}] = new FootSoldier(1);
	board[{0,3}] = new FootCommander(1);
	board[{0,5}] = new FootSoldier(1);
	CHECK(board.has_soldiers(1)==true);

	// Add soldiers for player 2:
	CHECK(board.has_soldiers(2)==false);
	board[{7,1}] = new FootSoldier(2);
	board[{7,3}] = new FootCommander(2);
	board[{7,5}] = new FootSoldier(2);
	CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK_THROWS_AS(board.move(2, {6,1}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK_THROWS_AS(board.move(2, {6,1}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK_THROWS_AS(board.move(2, {6,1}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK_THROWS_AS(board.move(2, {6,1}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK_THROWS_AS(board.move(2, {6,1}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK_THROWS_AS(board.move(2, {6,1}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK_THROWS_AS(board.move(2, {6,1}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK_THROWS_AS(board.move(2, {6,1}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK(board.has_soldiers(2)==true);
    CHECK_THROWS_AS(board.move(2, {6,1}, Board::MoveDIR::Down), std::invalid_argument);

//    CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   
}
TEST_CASE("Throw std::invalid_argument") {
    WarGame::Board board( 8,  8);
    board[{0,0}] = new FootSoldier(1);
	board[{0,7}] = new FootSoldier(1);
	board[{7,0}] = new FootSoldier(1);
    board[{7,7}] = new FootSoldier(1);
	board[{0,3}] = new FootSoldier(1);
	board[{0,5}] = new FootSoldier(1);
    board[{7,3}] = new FootSoldier(1);
	board[{7,5}] = new FootSoldier(1);
	board[{3,7}] = new FootSoldier(1);
    board[{5,7}] = new FootSoldier(1);
	board[{3,0}] = new FootSoldier(1);
	board[{5,0}] = new FootSoldier(1);
    board[{6,0}] = new FootSoldier(1);
    board[{4,0}] = new FootSoldier(2);
    CHECK_THROWS_AS(board.move(1, {0,0}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {0,0}, Board::MoveDIR::Left), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {0,7}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {0,7}, Board::MoveDIR::Right), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {7,0}, Board::MoveDIR::Up), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {7,0}, Board::MoveDIR::Left), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {7,7}, Board::MoveDIR::Up), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {7,7}, Board::MoveDIR::Right), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {0,3}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {0,5}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {7,3}, Board::MoveDIR::Up), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {7,5}, Board::MoveDIR::Up), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {3,7}, Board::MoveDIR::Right), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {5,7}, Board::MoveDIR::Right), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {3,0}, Board::MoveDIR::Left), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {5,0}, Board::MoveDIR::Left), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {6,0}, Board::MoveDIR::Left), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {6,0}, Board::MoveDIR::Up), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {4,0}, Board::MoveDIR::Left), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {4,0}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {4,0}, Board::MoveDIR::Up), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {3,2}, Board::MoveDIR::Up), std::invalid_argument);
    CHECK_THROWS_AS(board.move(1, {4,1}, Board::MoveDIR::Left), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {6,3}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {2,2}, Board::MoveDIR::Up), std::invalid_argument);
}

TEST_CASE("Move"){
    WarGame::Board board( 8,  8);
    board[{4,4}] = new FootSoldier(1);
    board[{5,3}] = new FootSoldier(1);
	board[{3,5}] = new FootSoldier(1);
    board[{3,3}] = new FootSoldier(1);
    board.move(1, {4,4}, Board::MoveDIR::Up);
    CHECK_THROWS_AS(board.move(1, {5,3}, Board::MoveDIR::Right), std::invalid_argument);
    board.move(1, {5,4}, Board::MoveDIR::Down);
    board.move(1, {4,4}, Board::MoveDIR::Down);
    CHECK_THROWS_AS(board.move(1, {3,3}, Board::MoveDIR::Right), std::invalid_argument);
    board.move(1, {3,4}, Board::MoveDIR::Up);
    board.move(1, {4,4}, Board::MoveDIR::Right);
    CHECK_THROWS_AS(board.move(1, {3,5}, Board::MoveDIR::Up), std::invalid_argument);
    board.move(1, {4,5}, Board::MoveDIR::Left);
    board.move(1, {4,4}, Board::MoveDIR::Left);
    CHECK_THROWS_AS(board.move(1, {3,3}, Board::MoveDIR::Up), std::invalid_argument);
}

TEST_CASE("Foot"){
    WarGame::Board board( 8,  8);
    board[{3,7}] = new FootSoldier(1);
    board[{3,3}] = new FootCommander(1);
	board[{3,0}] = new FootSoldier(1);
    board[{5,7}] = new FootSoldier(2);
    board[{5,3}] = new FootSoldier(2);
    board[{5,0}] = new FootSoldier(2);
    CHECK(board.has_soldiers(1)==true);
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {3,7}, Board::MoveDIR::Up);
    cout<<board[{5,7}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {3,3}, Board::MoveDIR::Up);
    cout<<board[{5,7}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {3,0}, Board::MoveDIR::Up);
    cout<<board[{5,0}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {4,7}, Board::MoveDIR::Down);
    cout<<board[{5,7}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {4,3}, Board::MoveDIR::Down);
    cout<<board[{5,7}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {4,0}, Board::MoveDIR::Down);
    //cout<<board[{5,0}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {3,7}, Board::MoveDIR::Up);
    cout<<board[{5,7}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {3,3}, Board::MoveDIR::Up);
    cout<<board[{5,7}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {3,0}, Board::MoveDIR::Up);
    //cout<<board[{5,0}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {4,7}, Board::MoveDIR::Down);
    cout<<board[{5,7}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {4,3}, Board::MoveDIR::Down);
    cout<<board[{5,7}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {4,0}, Board::MoveDIR::Down);
    //cout<<board[{5,0}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {3,7}, Board::MoveDIR::Up);
    cout<<board[{5,7}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {3,3}, Board::MoveDIR::Up);
    cout<<board[{5,7}]->isAlive()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==true);
    board.move(1, {3,0}, Board::MoveDIR::Up);
    //cout<<board[{5,0}]->getLife()<<"\n"<<endl;
    CHECK(board.has_soldiers(2)==false);
    CHECK_THROWS_AS(board.move(2, {5,7}, Board::MoveDIR::Up), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {5,3}, Board::MoveDIR::Up), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {5,0}, Board::MoveDIR::Up), std::invalid_argument);
}
TEST_CASE("Sniper"){
    WarGame::Board board( 8,  8);
    board[{3,7}] = new Sniper(1);
    board[{3,3}] = new SniperCommander(1);
	board[{5,0}] = new FootCommander(2);
    board[{5,7}] = new FootSoldier(2);
    board.move(1, {3,7}, Board::MoveDIR::Up);
    board.move(1, {3,3}, Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2)==true);
    CHECK_THROWS_AS(board.move(2, {5,7}, Board::MoveDIR::Up), std::invalid_argument);
    board.move(1, {4,7}, Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2)==false);
}

TEST_CASE("Paramedic"){
    WarGame::Board board( 8,  8);
    board[{3,7}] = new Sniper(1);
    board[{3,3}] = new SniperCommander(1);
    board[{5,6}] = new Paramedic(2);
    board[{5,1}] = new ParamedicCommander(2);
	board[{5,0}] = new FootSoldier(2);
    board[{5,7}] = new FootSoldier(2);
    board.move(1, {3,7}, Board::MoveDIR::Up);
    board.move(1, {3,3}, Board::MoveDIR::Up);
    board.move(1, {4,7}, Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2)==true);
    board.move(2, {5,1}, Board::MoveDIR::Up);
    board.move(1, {4,3}, Board::MoveDIR::Up);
    board.move(1, {3,7}, Board::MoveDIR::Up);
    board.move(1, {4,7}, Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2)==false);
    board.move(1, {5,3}, Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2)==false);
}