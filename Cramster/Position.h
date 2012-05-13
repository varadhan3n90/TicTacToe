#include "stdafx.h"
#include <iostream>
using namespace std;
#ifndef _POSITION_H
#define _POSITION_H
	class Position{
	private:
		int x;
		int y;
	public:
		friend istream& operator>>(istream &in,Position &p);
		void setX(int);
		void setY(int);
		int getX();
		int getY();
	};
#endif