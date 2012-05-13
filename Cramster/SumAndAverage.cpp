#include "stdafx.h"
#include <iostream>
using namespace std;

void sumAndAverage(int a[][10],int m,int n,int &sum,int &avg)
{
	sum = 0;
	avg = 0;
	int average = 0;
	int count = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum += a[i][j];
			if( a[i][j] > 0 ){
				average += a[i][j];
				count ++;
			}
		}
	}
	avg = average / count;
}

int SumAverage_Main()
{
	int sum = 0, average = 0;
	int a[][10] = 
	{
		{1,2},{3,4},{-5,3}
	};
	sumAndAverage(a,3,2,sum,average);
	cout<<"Sum is: "<<sum<<endl<<"Average is: "<<average<<endl;
//	system("pause");
	return 0;
}