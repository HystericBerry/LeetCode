#ifndef REVERSE_WORDS__H
#define REVERSE_WORDS__H

#include <string>

class ReverseWords
{
public:
	// LeetCode Solution
	std::string solution(std::string s);

	// Interview Solution
	std::string reverseWords(std::string s);

	void reverseRange(std::string& s, size_t i, size_t j);

	void findStart(std::string& s, size_t& i);

	size_t findEnd(std::string& s, const size_t& i);
};

#endif