#include "BestTimeToBuyAndSellStock.h"

BestTimeToBuyAndSellStock::BestTimeToBuyAndSellStock()
{

}

BestTimeToBuyAndSellStock::~BestTimeToBuyAndSellStock()
{

}

int BestTimeToBuyAndSellStock::maxProfit(std::vector<int>& prices)
{
	system("cls");
	cout << "Please enter the prices of the products each day in respective order: " << std::endl;
	
	for (int i = 0; i < 7; i++)
	{
		cin >> TempUserInput;
		prices.push_back(TempUserInput);
		cout << std::endl;
	}
	
	return largestNumberAfterMin(prices, (min(prices, prices.size()))); 
}

int BestTimeToBuyAndSellStock::min(std::vector<int>& prices, int n)
{
	if (n == 1)
	{
		return prices[n - 1];
	}

	int possible_min = min(prices, n - 1);

	if (possible_min < prices[n - 1])
	{
		return possible_min;
	}
	else
	{
		return prices[n - 1];
	}
}

int BestTimeToBuyAndSellStock::largestNumberAfterMin(std::vector<int>& prices, int lowestNumber)
{
	bool after_min_value = false;
	bool is_last_value = false;
	int possible_max = lowestNumber;
	

	for (int i = 0; i < prices.size(); i++)
	{
		if (prices[i] == lowestNumber)
		{
			after_min_value = true;
		}
		else if (after_min_value == true && prices[i] > possible_max)
		{
			possible_max = prices[i];
		}
	}
	if (after_min_value == true && (possible_max != prices[prices.size()-1]))
	{
		return possible_max;
	}
	else
	{
		return 0;
	}
}
	

void BestTimeToBuyAndSellStock::StartBestTimeToSell()
{
	cout << maxProfit(Prices);
}
