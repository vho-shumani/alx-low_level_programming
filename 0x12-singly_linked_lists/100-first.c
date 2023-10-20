#include "lists.h"
/**
 * Use constructor attribute so that the function executes before main.
 */
void print_message(void)__attribute__((constructor));

/**
 * print_meassage - print a string before main function.
 * Return: noting.
 */

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
