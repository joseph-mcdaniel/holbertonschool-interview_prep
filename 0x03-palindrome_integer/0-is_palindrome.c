#include "palindrome.h"
/**
 * is_palindrome - checks whether integer is a palindrome
 * @n: number
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(unsigned long n)
{
	unsigned long reversedInt;
	unsigned long originalInt = n;
	unsigned long remainder;

	reversedInt = 0;
	while (originalInt > 0)
	{
		remainder = originalInt % 10;
		reversedInt = reversedInt * 10 + remainder;
		originalInt /= 10;
	}

	if (reversedInt == n)
		return (1);
	return (0);
}
