#include <stdio.h>
// #include <math.h>
#define SIZE 16

void toBin(int num)
{
	for (int k = 0; k < SIZE; ++k) {
		printf("%d",num&1);
		num >>= 1;
	}
	printf("\n");
}

int power(int base, int power)
{
	int ret = 1;
	for (int i = 0; i < power; ++i) 
		ret = ret * base;
	return ret;
}

int mul(int num1, int num2)
{
	int ret = 0;
	for (int i = 0; i < SIZE; ++i) {
		ret = 

		
	}	
}

int main(void)
{
	char Arr[power(2,4)];
	for (int i = 1; i < power(2,5); i=i+2) {
		// printf("i = %d\n", i);
		int num = i;
		int sum = 0;
		for (int k = 1; k < SIZE; ++k) {
			if (num & 1)
				sum += 1;
			num >>= 1;
		}

		if (sum & 1) {
			toBin(i);
			printf("i = %d\n", i);
		}

	}
	return 0;
}
