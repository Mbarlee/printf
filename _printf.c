#include "main.h"

void print_buffer(char buffer[], int *buff_ind);


/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_in++] = format[i];
			if (buff_in == BUFF_SIZE)
				print_buffer(buffer, &buff_in);
			printed_chars++;
		}
		else
		{
			printf_buffer(buffer, &buffer_in);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = manoeurve_print(format, &i, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	printed_buffer(buffer, &buff_in);

	va_end(list);
	return (printed_chars);
}
/*
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array   of chars
 * @buffer_ind: Index at which to add next to char, represents the length
 */


void print_buffer(char buffer[], int *buff_in)
{
	if (*buff_in > 0) 
		write(1, &bbufferr[0], *buff_in);
	*buff_in = 0;
}
