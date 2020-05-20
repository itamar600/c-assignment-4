#include "doctest.h"
#include "Board.hpp"
#include "FootCommander.hpp"
#include <string>
#include <iostream>
using namespace std;
using namespace WarGame;

TEST_CASE("1") {
    WarGame::Board board( 8,  8);
    CHECK_THROWS_AS(!board.has_soldiers(1), std::exception);
    CHECK_THROWS_AS(!board.has_soldiers(2), std::exception);
	board[{0,1}] = new FootSoldier(1);
	board[{0,3}] = new FootCommander(1);
	board[{0,5}] = new FootSoldier(1);
	CHECK(board.has_soldiers(1)==true);

	// Add soldiers for player 2:
	CHECK(!board.has_soldiers(2)==false);
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
