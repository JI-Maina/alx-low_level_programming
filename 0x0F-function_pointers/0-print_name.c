
/**
 * print_name - Prints a name
 *
 * @name: name othe person
 * @f: function pointer that takes a pointer as an arguement
 *
 * Return: Nothing always
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
