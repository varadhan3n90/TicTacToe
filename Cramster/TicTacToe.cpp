#include "stdafx.h"
#include "TicTacToe.h"
#include "Position.h"
#include <iostream>

using namespace std;

int TicTacToe::playerNumber=0;


int TicTacToe::getNewPlayerNumber(){
	return ++playerNumber;
}

void TicTacToe::initializeBoard(){
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			board[i][j]=0;
}

bool TicTacToe::isCompleted(){	
	
	if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]){
		if(board[0][1]!=0){
			//cout<<"R1 satisfied."<<endl;
			return true;
		}
	}
	
	if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]){
		if(board[1][2]!=0){
			//cout<<"R2 satisfied."<<endl;
			return true;
		}
	}
	
	if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]){
		if(board[2][0]!=0){
			//cout<<"R3 satisfied."<<endl;
			return true;
		}
	}
	if(board[0][0]==board[1][0]&&board[1][0]==board[2][0]){
		if(board[0][0]!=0){
			//cout<<"C1 satisfied."<<endl;
			return true;
		}
	}
	
	if(board[0][1]==board[1][1]&&board[1][1]==board[2][1]){
		if(board[0][1]!=0){
			//cout<<"C2 satisfied."<<endl;
			return true;
		}
	}
	
	if(board[0][2]==board[1][2]&&board[1][2]==board[2][2]){
		if(board[0][2]!=0){
			//cout<<"C3 satisfied."<<endl;
			return true;
		}
	}
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2])
		if(board[0][0]!=0){
			//cout<<"X1 satisfied."<<endl;
			return true;
		}
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0])
		if(board[0][2]!=0){
			//cout<<"X2 satisfied."<<endl;
			return true;
		}

	return false;
}

bool TicTacToe::isFull(){
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(board[i][j]==0)
				return false;
	return true;
}

void TicTacToe::playGame(){
	bool value;
	int i=0;
	while(!isCompleted()&&!isFull()){
		if(player1->getTurn()){			
			value = setValue(player1);
			//cout<<"Value is "<<value<<endl;
			if(value)
				printBoard();
			player2->setTurn(value);
			player1->setTurn(!value);
		}else{						
			value = setValue(player2);
			//cout<<"Value is "<<value<<endl;
			if(value)
				printBoard();
			player2->setTurn(!value);
			player1->setTurn(value);
		}		
		//printBoard();
	}
	if(isCompleted())
		if(player1->getTurn())
			cout<<player2->getPlayerName()<<" is winner."<<endl;
		else
			cout<<player1->getPlayerName()<<" is winner."<<endl;
	else
		cout<<"Draw"<<endl;
	cout<<"Completed.."<<endl;
}

void TicTacToe::singlePlayer(){
	string name;	
	cout<<"Enter player 1 name: ";
	cin>>name;
	player1 = new Player(name);
	player1->setTurn(true);	
}

void TicTacToe::twoPlayer(){
	string name;
	cout<<"Enter player 2 name: ";
	cin>>name;
	player2 = new Player(name);	
	player2->setTurn(false);	
}

void TicTacToe::setGameType(){
	bool completed = true;
	int choice = 0;
	do{
		completed = true;
		cout<<"1. Single Player\n2. Two player\n3. Exit\nChoice: ";
		cin>>choice;
		switch(choice){
		case 1:
			cout<<"Single player mode selected.."<<endl;
			singlePlayer();
			player2 = new Computer();
			player2->setTurn(false);
			break;
		case 2:
			singlePlayer();
			twoPlayer();
			break;
		case 3:
			exit(0);
		default:
			completed = false;
		}
	}while(!completed);
}

TicTacToe::TicTacToe(){
	initializeBoard();
	setGameType();
	printBoard();
	playGame();	
}

char TicTacToe::getValueAtBoard(int x,int y){
	if(board[x][y]==1)
		return 'X';
	if(board[x][y]==2)
		return 'O';
	return ' ';
}

bool TicTacToe::setValue(Player *p){
	cout<<"Player "<<p->getPlayerName()<<" turn"<<endl;
	Position pos = p->getMove();
	int x = pos.getX();	
	int y = pos.getY();
	//cout<<"Position entered by user: "<<x<<" "<<y<<endl;
	if(board[x-1][y-1]==0){
			board[x-1][y-1] = p->getPlayerNumber();
			return true;
		}
	return false;

}

void TicTacToe::printBoard(){

	cout<<endl;
	cout<<" ----------- "<<endl;
	cout<<"| "<<getValueAtBoard(0,0)<<" | "<<getValueAtBoard(0,1)<<" | "<<getValueAtBoard(0,2)<<" |"<<endl;
	cout<<"|---|---|---|"<<endl;
	cout<<"| "<<getValueAtBoard(1,0)<<" | "<<getValueAtBoard(1,1)<<" | "<<getValueAtBoard(1,2)<<" |"<<endl;
	cout<<"|---|---|---|"<<endl;
	cout<<"| "<<getValueAtBoard(2,0)<<" | "<<getValueAtBoard(2,1)<<" | "<<getValueAtBoard(2,2)<<" |"<<endl;
	cout<<" ----------- "<<endl;
	cout<<endl;
	
}