/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: arithmetic operator.
 * 
 * Return: returns a pointer to the function that corresponds to the s. 
 */
int (*get_op_func(char *s))(int, int)
{
	op_t x[5];

	if (*s != '+' || *s != '-' || *s != '*' || *s != '/' || *s != '%')
	{
		return (NULL);
	}
}	
