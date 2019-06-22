#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int* x = NULL;
	char* v = NULL;
	double* y = NULL;
	int amount = 0;
	int choice = 0;

	printf("Make a choice\n\n1.\tint\n2.\tchar\n3.\tdouble\n\n");
	scanf("%d", &choice);

	printf("\nEnter an amount: ");
	scanf("%d", &amount);

	//memset()

	if (choice == 1) {
		x = (int *) malloc(amount * sizeof(int));
		if (x == NULL) {
			printf("\nOut of memory!\n");
			return 1;
		}
		else {
			memset(x, 0, amount * sizeof(int));
			printf("\nMemory allocated.\n");
			printf("\nAddress of x is 0x%p\n", &x);
			free(x);
		}
	}
	else if (choice == 2) {
		v = (char *) malloc(amount * sizeof(char));
		if (v == NULL) {
			printf("\nOut of memory!\n");
			return 1;
		}
		else {
			memset(v, 0, amount * sizeof(char));
			printf("\nMemory allocated.\n");
			printf("\nAddress of x is 0x%p\n", &v);
			free(v);
		}
	}
	else if (choice == 3) {
		y = (double *) malloc(amount * sizeof(double));
		if (y == NULL) {
			printf("\nOut of memory!\n");
			return 1;
		}
		else {
			memset(y, 0, amount * sizeof(double));
			printf("\nMemory allocated.\n");
			printf("\nAddress of x is 0x%p\n", &y);
			free(y);
		}
	}
	else {
		printf("\nWrong input\n");
		return 1;
	}

	return 0;
}
