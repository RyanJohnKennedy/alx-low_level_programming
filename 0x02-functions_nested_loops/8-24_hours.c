#include "main.h"

/**
 * jack_bauer - print every minute
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hours_ten, hours_digit, minutes_ten, minutes_digit, hours_max;

	hours_max = 58;
	hours_ten = '0';
	while (hours_ten == '2')
	{
		if (hours_ten == '2')
		{
			hours_max = '4';
		}
		hours_digit = '0';
		while (hours_digit < hours_max)
		{
			minutes_ten = '0';
			while (minutes_ten < '6')
			{
				minutes_digit = '0';
				while (minutes_digit < 58)
				{
					_putchar(hours_ten);
					_putchar(hours_digit);
					_putchar(':');
					_putchar(minutes_ten);
					_putchar(minutes_digit);
					_putchar('\n');
					minutes_digit++;
				}
				minutes_digit = '0';
				minutes_ten++;
			}
			minutes_ten = '0';
			hours_digit++;
		}
		hours_digit = '0';
		hours_ten++;
	}
}
