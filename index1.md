## Akshay Dhan
### Assignment #1
- [X] Watch Imitation Game
- [X] Write C program to list all primitive polynomials from $n=4$ to $n=16$.

```c
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
```
[solution here](https://dhancodes.github.io/Cryptology_Assign/Assignment1/primitive_poly.c)
- [X] Find out about Non-Linear Feedback registers of your own
- [ ] Berlekamp_Massey algorithm implementation in C to find the shortest linear-feedback shift register (LFSR).
- [ ] Write a C code to implement Stream Cipher.
