#include "stdafx.h"

#include "Palindrome.h"
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

int isPalindrome(char *x) 
{
	int i = 0;
	stack<char> stk;
	queue<char> q;
	while( x[i] != '\0' )
	{
		if(isalpha(x[i]))
		{			
			stk.push(toupper(x[i]));
			q.push(toupper(x[i]));
		}
		i++;
	}
	while(!stk.empty())
	{
		if(q.front()==stk.top())
		{
			q.pop();
			stk.pop();
		}else
		{
			return 0;
		}
	}
	return 1;
}