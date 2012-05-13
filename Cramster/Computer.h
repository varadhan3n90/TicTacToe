#include "stdafx.h"
#include "Position.h"
#include "Player.h"

#ifndef _COMPUTER_H
#define _COMPUTER_H
	class Computer : public Player{
	public:
		Computer();
		Position getMove();
	};
#endif