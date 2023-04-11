#include "main.h"

int _abs(int);
/**
 * _abs - function that computes the absolute value of an integer.
 * @num: integert to determine absolute value
 *
 * Return: abs value when num is negative otherwise return num.
*/
int _abs(int num)
{
	int abs = 0;

	if (num < 0)
	{
		abs = num * (-1);
		return (abs);
	}
	else
		return (num);
}
