#pragma once
#include <string>

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
