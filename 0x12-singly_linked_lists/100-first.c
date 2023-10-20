#include "lists.h"
/**
 * print_message - prints a string to stdout due to constructor.
 */
void print_message(void)__attribute__((constructor));

/**
 * print_message - print a string before main function.
 * Return: noting.
 */

void print_message(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("I bore my house upon my back!\n");
}
