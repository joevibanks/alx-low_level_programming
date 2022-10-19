#include "main.h"
#include <unistd.h>
/**
 * _putchar -prints out all the character c to standout
 * code written by joevi
 * Return: On success 1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
