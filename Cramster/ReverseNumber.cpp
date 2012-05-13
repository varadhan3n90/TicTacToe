/*
* Write a class whose constructor takes an integer as an argument and has two methods. 
* The first method returns the number with its digits reversed. For example, given the number 7631, the method should return 1367. 
* The second method returns the sum of the digits in the number. For example, given the number 7631, the second method should return 17.
* Answered for : http://www.cramster.com/answers-may-12/computer-science/class-constructo-write-class-constructor-takes-integer-argum_2537767.aspx
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

class Reverse{
private:
	int number;
public:

	Reverse(int number){
		Reverse::number = number;
	}

	int reverse(){
		int rev = 0;
		int no = number;
		while(no!=0){
			rev = (rev * 10) + no % 10;
			no /= 10;
		}
		return rev;
	}

	int sum(){
		int sum = 0;
		int no = number;
		while(no!=0){
			sum += no % 10;
			no /=10;
		}
		return sum;
	}
		
};

int Reverse_Main()
{
	int number = 0;
	cout<<"Enter a number: ";
	cin>>number;
	Reverse r(number);
	cout<<"Reverse of number is: "<<r.reverse()<<endl;
	cout<<"Sum of terms is: "<<r.sum()<<endl;
	system("pause");
	return 0;
}
