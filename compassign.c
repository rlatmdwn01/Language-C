//file: compassign.c

#include <stdio.h>

int main(void)
{
	int x = 5, y = 10;

	x += y;
	printf("The addition is: %d\n", x);
	x -= y;
	printf("The subtraction is: %d\n", x);
	x *= y;
	printf("The multiplication is: %d\n", x);
	x /= y;
	printf("The division is: %d\n", x);
	x %= y;
	printf("The remainder is: %d\n", x);
	x *= x + y;
	printf("x*=x+y is: %d\n", x);

	return 0;

}