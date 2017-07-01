#include <iostream>
#include "557_ReversedWords_III\ReverseWords.h"

void leetcode();
void interview();

int main()
{
	//interview();
	//leetcode();


	system("pause");
}

void interview()
{
	// SOLUTION TO LEETCODE PROBLEM:
	ReverseWords reverseRange;

	// TEST CASE 1:
	std::string s = std::string("  This is it! ");
	std::string ans = reverseRange.reverseWords(s);
	std::cout << "answer:\n" << ans << std::endl;
	
	// TEST CASE 2:
	s = std::string("Let's take LeetCode contest");
	ans = reverseRange.reverseWords(s);
	std::cout << "answer:\n" << ans << std::endl;
}

void leetcode()
{
	// SOLUTION TO LEETCODE PROBLEM:
	ReverseWords reverseRange;

	// TEST CASE 1:
	std::string s = std::string("  This is it! ");
	std::string ans = reverseRange.solution(s);
	std::cout << "answer:\n" << ans << std::endl;
	
	// TEST CASE 2:
	s = std::string("Let's take LeetCode contest");
	ans = reverseRange.solution(s);
	std::cout << "answer:\n" << ans << std::endl;
}
