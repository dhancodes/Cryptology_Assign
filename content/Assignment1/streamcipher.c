#include <stdio.h>
#include <stdlib.h>  
int main(void)
{
	int n,k;
	printf("Enter length of the text:\n");
	scanf("%d",&n);
	printf("Enter the message text (with spaces):\n");
	for (int i = 0; i < n; ++i) {
		scanf("%d",&k);
		printf("%d ",k^(rand()%2));
	}
	return 0;
}
