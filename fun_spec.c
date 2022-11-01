#include "main.h"

/**
 * fun_spec - look for the specifier
 * @x: variable to the function
 * Return: function
 */
int (*fun_spec(char x))(va_list)
{
int i = 0;
spec arr[] = {
{"c", print_c},
{"s", print_s},
{"%", print_percent},
{"d", print_d},
{"i", print_i},
{NULL, NULL}
};
while (arr[i].valid)
{
if (x == arr[i].valid[0])
return (arr[i].f);
i++;
}
return (NULL);
}
