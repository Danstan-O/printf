#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a single character
 * Return: returns 1 on success
 * @c: the input character
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
