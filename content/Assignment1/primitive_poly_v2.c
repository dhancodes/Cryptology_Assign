#include <stdio.h>
#define SIZE 16

void toBin(int num)
{
	for (int k = SIZE; k > 0; --k) {
		if ((num>>k)&1) printf("x^%d+",k);
	}
	printf("1\n");
}

int power(int base, int power)
{
	int ret = 1;
	for (int i = 0; i < power; ++i) 
		ret = ret * base;
	return ret;
}

int mul(int m, int n)
{
	int num1 = m;
	int num2 =n;
	int ret = 0;
	for (int i = 0; i < SIZE; ++i) {
		if (num2&1) ret = ret^num1;
		if (num2 == 0 ) break;
		num1 <<= 1;
		num2 >>= 1;
	}
	return ret;
}

int isValid(int num) // Will check if the polynominal has 1 as a solution.
{
	if (num&1) return 0;
	int sum = 0;
	for (int k = 1; k < SIZE; ++k) {
		if (num & 1)
			sum += 1;
		num >>= 1;
	}
	if (sum&1)
		return 0;
	else
		return 1;
}

int main(void)
{
	int len = power(2,SIZE+1);
	char Arr[len];
	for (int i = 1; i < len; ++i) {
		Arr[i] = 1;
	}

	for (unsigned int i = 3; i < len; i++) {
		if (Arr[i]==1) {
			for (int k = 2; k < len; ++k) {
				int value = mul(i,k);
				if (value > len) {
					break;
				} else if (!((value&1) && isValid(value))) {
					Arr[value] = 0;
				}
			}
		}
	}

	for (unsigned int i = 6; i < len; ++i) {
		if (Arr[i]==1) {
			toBin(i);
		}
	}
	return 0;
}
