#include "stdafx.h"
#include "Computer.h"
#include <time.h>
#include <iostream>
#include <string>

Computer::Computer():Player("Computer"){
	srand(time(NULL));	
	cout<<"Computer created.. "<<getPlayerNumber();
}

Position Computer::getMove(){
	//cout<<"Auto move.. Thinking.."<<endl;
	Position p;
	int val = rand() % 9 + 1;
	int row = val / 3 + 1;
	int col = val % 3 + 1;
	p.setX(row);
	p.setY(col);
	return p;
}