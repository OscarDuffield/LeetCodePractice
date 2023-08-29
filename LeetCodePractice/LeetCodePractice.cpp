
#include <iostream>
#include "PalindromeNumber.h"
 

int main()
{
	std::cout << "Which program would you like to run:" << std::endl << std::endl;
	std::cout << "1. Linked List Palidrome Number" << std::endl;
	std::cout << "2. Non Linked List Palidrome Number" << std::endl;

	std::cout << std::endl;

	int UserInput;
	std::cin >> UserInput;

	if (UserInput == 1)
	{
		
	}
	else if (UserInput == 2)
	{
		Solution* solution = new Solution();

		solution->StartPalindromeNumber();

		delete solution;
	}
		
		
	
		
		
		
		
	
	
	
	
	

	
	return 1;
}




