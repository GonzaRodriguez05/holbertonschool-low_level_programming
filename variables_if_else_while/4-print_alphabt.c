#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Pint alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
	}
	putchar('\n');



return (0);

}
