#include <stdio.h>

int main()
{
	char v;
	short w;
	int x;
	double y;
	float z;
	char str[] = "Hello World";
	int *intPtr;
	char **charPtr;

	printf("\nSize of char 'v' in bytes is %d", sizeof(v));
	printf("\nSize of short 'w' in bytes is %d", sizeof(w));
	printf("\nSize of int 'x' in bytes is %d", sizeof(x));
	printf("\nSize of double 'y' in bytes is %d", sizeof(y));
	printf("\nSize of float 'z' in bytes is %d", sizeof(z));
	printf("\nSize of char str[] 'Hello World' in bytes is %d", sizeof(str));
	printf("\nSize of int pointer 'intPtr' in bytes is %d", sizeof(intPtr));
	printf("\nSize of char pointer 'charPtr' in bytes is %d", sizeof(charPtr));

	return 0;
}
