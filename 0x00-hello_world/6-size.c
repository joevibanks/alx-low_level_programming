#include <stdio.h>
/**
 * main -printing data types
 * code joevi
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long d;
float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}


