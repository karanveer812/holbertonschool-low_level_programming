#include "main.h"

/**
 * _isalpha - check if the character is uppercase
 * @c: Takes character as input
 *
 * Return: 1 if true
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
