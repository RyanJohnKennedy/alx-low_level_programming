#include <unistd.h>

/**
 * _putchar - writes the c
 * @c: Character
 *
 * Return: On Success 1
 * On error, -1 return
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
