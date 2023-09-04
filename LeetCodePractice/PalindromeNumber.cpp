#include "PalindromeNumber.h"

Solution::Solution()
{

}
Solution::~Solution()
{

}

void Solution::StartPalindromeNumber()
{
    system("cls");
    cout << "What number would you like to detect as a palindrome: " << std::endl;
    cin >> UserInputString;
    
    //Formatting
    cout << std::endl;
    cout << std::endl;

    //Passing the string into the function, can be done without using a string would just take some adjustments
    if (isPalindrome(UserInputString))
    {
        cout << UserInputString << " is a palindrome." << std::endl;
    }
    else
    {
        cout << UserInputString << " is not a palindrome." << std::endl;
    }

    
}

bool Solution::isPalindrome(std::string text)
{
    for (int i = 0; i < text.length() / 2; i++)   //making it loop half the length of the string
    {
        if (text[i] != text[text.length() - i - 1])   //This is used to compare the opposite position in the string ie. 6 if the string is six long whilst the other compares it to 1
        {
            return false;
        }
    }
    return true;
}
