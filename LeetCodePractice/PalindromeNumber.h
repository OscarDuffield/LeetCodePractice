#pragma once
#include <string>
#include <iostream>;

using std::cout;
using std::cin;



class Solution
{
    std::string UserInputString;
    int UserExitInput;

public:

    Solution();
    ~Solution();

    void StartPalindromeNumber();
    bool isPalindrome(std::string text);
};
