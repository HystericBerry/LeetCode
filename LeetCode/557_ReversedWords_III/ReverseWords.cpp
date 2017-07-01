#include "ReverseWords.h"

std::string ReverseWords::solution(std::string s)
{
	size_t end;
	for (size_t i = 0; i < s.size(); i = end+1)
	{
		findStart(s, i);
		end = findEnd(s, i);
		reverseRange(s, i, end);
	}

	return s;
}

// Actual Interview Variation I was asked to solve:
std::string ReverseWords::reverseWords(std::string s)
{
	reverseRange(s, 0, s.size());

	size_t end;
	for (size_t i = 0; i < s.size(); i = end+1)
	{
		findStart(s, i);
		end = findEnd(s, i);
		reverseRange(s, i, end);
	}

	return s;
}

void ReverseWords::reverseRange(std::string& s, size_t i, size_t j)
{
	size_t mid = (i + j) / 2;
	for (; i < mid; ++i)
	{
		const char temp = s[i]; // copy i by value
		s[i] = s[--j]; // overwrite i with j
		s[j] = temp; // overwrite j with i
	}
}

void ReverseWords::findStart(std::string& s, size_t& i)
{
	for (; i < s.size(); ++i)
		if (s[i] != ' ') break;
}

/*
 * Precondition: i is the beginning of a word
 * Returns: the end index of a word
 */
size_t ReverseWords::findEnd(std::string& s, const size_t& i)
{
	size_t j = i; // copy i index by value
	for (; j < s.size(); ++j)
		if (s[j] == ' ') break;
	return j;
}