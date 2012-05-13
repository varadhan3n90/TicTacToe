/*
* Program to sort three names in lexicographical order
* Answered for : http://www.cramster.com/answers-apr-12/computer-science/microsoft-studi-write-program-reads-strings-sorts_2480793.aspx
* Answered on : 30/04/12
*/

#include "stdafx.h"
#include <iostream>
#include <string.h>

using namespace std;

int LexicoSortMain()
{
	char name1[20],name2[20],name3[20];
	cout<<"Enter the three names\n";
	cin>>name1>>name2>>name3;
	cout<<"Names in sorted order"<<endl;
	if(strcmp(name1,name2)<0)
	{
		if(strcmp(name1,name3)<0)
		{
			cout<<name1;
			if(strcmp(name2,name3) < 0)
			{
				cout<<name2<<endl<<name3<<endl;
			}else
				cout<<name3<<endl<<name1<<endl;
		}
	}else if(strcmp(name2,name3)<0)
	{
		cout<<name2<<endl;
		if(strcmp(name1,name3)<0)
			cout<<name1<<endl<<name3<<endl;
		else
			cout<<name3<<endl<<name1<<endl;
	}else
	{
		cout<<name3<<endl<<name2<<endl<<name1<<endl;
	}
	system("pause");
	return 0;
}