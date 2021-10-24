#include <stdio.h>
int main()
{
	int A, B;
	printf("Enter A and B\n");
	printf("A = ");
	scanf("%i", &A);
	printf("B = ");
	scanf("%i", &B);
	if (A > 2 && B <= 3)
		printf("True");
	else
		printf("False");


}