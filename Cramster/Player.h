#include "stdafx.h"
#include "Position.h"
#include <string>

using namespace std;

#ifndef _PLAYER_H
#define _PLAYER_H

	class Player{

		int playerNumber;
		string name;
		bool turn;

	public:

		//Player();
		Player(string name);
		string getPlayerName();
		int getPlayerNumber();
		bool getTurn();
		void setTurn(bool turn);
		virtual Position getMove();

	};

#endif