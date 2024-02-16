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

for (num = 48; num < 58; num++)
{
	putchar(num);
	if(num == 57)
		continue;
	putchar(44);
	putchar(32);

}

putchar('\n');
return (0);
}
