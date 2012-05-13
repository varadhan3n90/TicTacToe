#include "stdafx.h"
#include "Position.h"

istream& operator>>(istream &in,Position &p){
	bool completed = false;
	int tempX,tempY;
	while(!completed){
		cout<<"Enter row and column: ";
		in>>tempX>>tempY;
		if(tempX>0&&tempY>0&&tempX<=3&&tempY<=3){
			completed = true;					
		}else{
			cout<<"Invalid position..  Enter new position.."<<endl;
		}
	}
	p.setX(tempX);
	p.setY(tempY);
	return in;
}

void Position::setX(int X){
	x = X;
}

void Position::setY(int Y){
	y = Y;
}

int Position::getX(){
	return x;
}

int Position::getY(){
	return y;
}