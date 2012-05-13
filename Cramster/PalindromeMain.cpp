#include "stdafx.h"
//  Answered for :http://www.cramster.com/answers-apr-12/computer-science/palindrome-surpose-stack-queue-data-structure-che_2444843.aspx?rec=0
#include "Palindrome.h"
#include <iostream>

using namespace std;
// change to main if necessary
int PalindromeMain()
{	
	char s[] = "Hello world";
	char *sent[] = {
		"A dog, a panic in a pagoda",
		"A dog, a plan, a canal, pagoda",
		"A man, a plan, a canal?? Panama!",
		"civic",
		"If I had a hi?fi",
		"Do geese see God?",		
		"Neil, a trap! Sid is part alien!",
		"Never odd or even",
		"No devil lived on.",
		"No lemons, no melon",
		"racecar",
		"RACEcar",                                         // uppercase equals lowercase
		"Rats live on no evil star.",
		"Red rum, sir, is murder!",
		"Rise to vote, sir.",
		"rotator",
		"rotor",
		"Step on no pets.",
		"Was it a cat I saw?",
		"Was it	a car or a cat I saw?",
		"Yawn a more Roman way. " 
	};
	for(int i=0;i<20;i++)
	{
		cout<<sent[i]<<"? ";
		isPalindrome(sent[i])?cout<<"yes":cout<<"no";
		cout<<endl;
	}	
	std::cout<<endl;
	std::system("pause");
	return 0;
}