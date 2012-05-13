#include "stdafx.h"
#include "Player.h"
#include "Computer.h"

#ifndef _TICTACTOE_H
#define _TICTACTOE_H
	class TicTacToe{

	private:
		Player *player1;
		Player *player2;
		static int playerNumber;

		int board[3][3];
		void initializeBoard();
		char getValueAtBoard(int x,int y);
		void playGame();
		bool setValue(Player *p);
		bool isCompleted();
		bool isFull();

		void setGameType();
		void singlePlayer();
		void twoPlayer();


	public:
		TicTacToe();
		void printBoard();		
		static int getNewPlayerNumber();
		

	};

#endif