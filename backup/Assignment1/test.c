#include <stdio.h>
int main(void)
{
	int a = 6;
	int b = 3;
	printf("a^b = %d\n", a^b);
	a = a>>1;
	printf("a = %d\n", a);
	return 0;
}
