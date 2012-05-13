#include "stdafx.h"
#include "Player.h"
#include "TicTacToe.h"
#include <iostream>

using namespace std;

/*
Player::Player(){
		cout<<"Enter player name: ";
		cin>>name;
}
*/

Player::Player(string name){
	Player::name = name;
	Player::playerNumber = TicTacToe::getNewPlayerNumber();
	//cout<<"Player number "<<playerNumber<<endl;
}

string Player::getPlayerName(){
	return name;
}

int Player::getPlayerNumber(){
	return playerNumber;
}

void Player::setTurn(bool turn){
	Player::turn = turn;
}

bool Player::getTurn(){
	return turn;
}

Position Player::getMove(){	
	Position pos;
	cin >> pos;	
	return pos;
}