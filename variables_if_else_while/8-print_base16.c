#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Pint number base 16
 *
 * Return: Always (Success)
 */
int main(void)
{

int num;
char a;
for (num = 0; num < 10; num++)
{
	putchar(num);
}
for (a = 'a'; a <= 'f'; a++)
{
	putchar(a);
}
putchar('\n');
return (0);
}
