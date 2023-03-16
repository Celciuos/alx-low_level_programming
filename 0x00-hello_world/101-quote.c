/*
 * File: 101-quote.c
 * Auth: Joe Aruru
 */

#include <unistd.h>

/**
 * main - Prints a Quote
 *
 * Return: Is 1.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
