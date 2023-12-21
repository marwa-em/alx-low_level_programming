#include <stdio.h>
/**
 *main - this is the main function
 *Return: always 0
 */

int main(void)
{
int count;
int a = 1, b = 2, next;

printf("%d, %d, ", a, b);

for (count = 3; count <= 98; count++)
{
next = a + b;
printf("%d", next);
if (count < 98)
{
printf(", ");
}
a = b;
b = next;
}
printf("\n");

return (0);
}

