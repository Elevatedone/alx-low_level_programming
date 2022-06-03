#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercaseAlphabet;

	for (lowercaseAlphabet = 'a'; lowercaseAlphabet <= 'z'; lowercaseAlphabet++)
	putchar(lowercaseAlphabet);
	putchar('\n');

	return (0);
}
