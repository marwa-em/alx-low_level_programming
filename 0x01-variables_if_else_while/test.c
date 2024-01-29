#include <stdlib.h>
#include <time.h>
/*more headers goes there */
#include <stdio.h>
/*betty style doc for function main goes there */
int main(void)
{
	int n;
	int j;

	int j = n % 10

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 5)
{
printf("The number %d is greater than 5\n", j);
}
else if (n == 0)
{
printf("The number %d is equal to 0\n", j);
}
else if (n < 6 && n != 0)
{
printf("The number %d is less than 6 but not equal to 0\n", j);
}
	return (0);
}
