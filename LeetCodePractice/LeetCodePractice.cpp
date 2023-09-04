
#include <iostream>
#include "PalindromeNumber.h"
#include "BestTimeToBuyAndSellStock.h"

int main()
{
	std::cout << "Which program would you like to run:" << std::endl << std::endl;
	std::cout << "1. Linked List Palidrome Number" << std::endl;
	std::cout << "2. Non Linked List Palidrome Number" << std::endl;
	std::cout << "3. Best Time To Buy And Sell Stock" << std::endl;

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
	else if (UserInput == 3)
	{
		BestTimeToBuyAndSellStock* BTTBASS_Solution = new BestTimeToBuyAndSellStock();
		
		BTTBASS_Solution->StartBestTimeToSell();

		delete BTTBASS_Solution;
	}
		
		
	
		
		
		
		
	
	
	
	
	

	
	return 1;
}




