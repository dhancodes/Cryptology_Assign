#include <stdio.h>
#include <math.h>
#define SIZE 16
int main(void)
{
	unsigned int i;
	int Arr[SIZE];
	for (i = 15; i < (unsigned int)pow(2,SIZE+1); ++i) {
			if (i & 1) {
				int num = i >> 1;
				int sum = 1;
				for (int k = 0; k < SIZE; ++k) {
					Arr[k] = num & 1;
					if (num & 1)
						sum += 1;
					num >>= 1;
				}
				if (sum%2 == 1) {
					for (int i = SIZE-1; i >= 0; --i) {
						if (Arr[i] == 1) {
							printf(" x^%d +",i+1);
						}
					}
					printf(" 1\n");
				}
			}
		}
}
