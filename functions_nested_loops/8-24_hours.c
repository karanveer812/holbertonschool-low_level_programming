#include "main.h"

/**
 * jack_bauer - every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes;

	while (hours < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
                        _putchar((minutes % 10) + '0');
			minutes++;
		}
		_putchar('\n');
		hours++;
	}
}
