#include <stdio.h>
/**
 *main - this is the main function for reverse alphabets
 *Return: always 0
 */

int main(void)

{
char i;

for (i = 'z'; i >= 'a'; i--)
putchar(i);
putchar('\n');
return (0);
}
