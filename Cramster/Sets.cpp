// Cramster.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

#define MODVAL 51
#define N 10
using namespace std;

void printSet(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<",";
	}
}

void Findunion(int A[],int B[])
{
	int i,j,k=0;
	int C[2*N];
	int flag = 0;
	cout<<"\n Union \n";
	for(i=0;i<N;i++)
	{
			C[k++] = A[i];
	}
	for(i=0;i<N;i++)
	{
		flag = 0;
		for(j=0;j<N;j++)
		{
			if(B[i]==A[j])
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
			C[k++] = B[i];
	}
	cout<<"{ ";
	printSet(C,k);
	cout<<" }\n";
}

void difference(int A[],int B[])
{
	int i,j,k=0,flag=0;
	int C[N];
	cout<<"\n Difference of sets \n";
	for(i=0;i<N;i++)
	{
		flag=0;
		for(j=0;j<N;j++)
		{
			if(A[i]==B[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			C[k++] = A[i];
	}
	cout<<"{ ";
	printSet(C,k);
	cout<<" }\n";
}

void intersection(int A[],int B[])
{

	int i,j,k=0;
	int C[2*N];
	cout<<"\n Intersection \n";
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(A[i]==B[j])
			{
				C[k++] = A[i];				
			}
		}
	}
	cout<<"{ ";
	printSet(C,k);
	cout<<" }\n";
}

void createSet(int A[],int n)
{
	int i,j,random,flag;
	for(i=0;i<n;i++)
	{
		flag = 0;
		random = rand() % MODVAL;
		for(j=0;j<i;j++)
		{
			if(A[j]==random)
			{
				flag = 1;
				break;
			}
		}
		if(flag==1)
		{
			i = i-1;
			continue;
		}else
		{
			A[i] = random;
		}
	}
}

// change to main if required
int SetsMain()
{
	int A[N],B[N];
	int i;
	srand ( time(NULL) );
	createSet(A,N);
	createSet(B,N);
	cout<<"\nSet A is {";
	printSet(A,N);
	cout<<" }\n";
	cout<<"\nSet B is {";
	printSet(B,N);
	cout<<" }\n";
	Findunion(A,B);
	intersection(A,B);
	difference(A,B);
	cout<<endl;
	//system("pause");
	return 0;
}
