#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints exactly and that piece of art is ueseful
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 205-10-19\n", 59);
	return (1);

}
