#include "main.h"

/**
* print_binary - Converts a number from base 10 to binary
* @list: List of arguments passed to this function
* Return: The length of the number printed
*/

int print_binary(int number)
{
	int arr[32], i = 0, count = 0;

	while (number >= 2)
	{
		arr[i] = number%2;
		number /= 2;
		i++;
	}
	arr[i] = number;

	for (i; i >= 0; i--)
	{
		count += _putchar(arr[i] + '0');
	}

	return (count);
}
