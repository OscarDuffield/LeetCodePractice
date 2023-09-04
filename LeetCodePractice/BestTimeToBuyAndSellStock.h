#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <ranges>




using std::cout;
using std::cin;

class BestTimeToBuyAndSellStock
{

	std::vector<int> Prices;
	int lowestIndex;
	int TempUserInput;

public:
	BestTimeToBuyAndSellStock* BTTBASS_Solution;

	BestTimeToBuyAndSellStock();
	~BestTimeToBuyAndSellStock();

	void StartBestTimeToSell();
	int maxProfit(std::vector<int>& prices);
	int min(std::vector<int>& prices, int n);
	int largestNumberAfterMin(std::vector<int>& prices, int lowestNumber);
};

