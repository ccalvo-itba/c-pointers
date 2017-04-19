/* Simple program depicting how pointers to different data types 
 * interact with each other.
 * 
 * 22.07 Programación I @ Instituto Tecnológico de Buenos Aires
 * Clementina Calvo, 2017 
 */

#include <stdio.h>

void printAllContents(long int *, int *, char *);
void printAllAddresses(long int *, int *, char *);
void printBytes(int *a, int n); // Cómo podría implementarse?

int main (void) {
	int integerArray[] = {1, 2, 3, 4, 5};
	long int *longIntegerPointer;
	int *integerPointer;
	char *characterPointer;

	longIntegerPointer = (long int *) integerArray;
	integerPointer = &integerArray[0];
	characterPointer = (char *)&integerArray[0];

	printf("Sizes:\n");

	printf("%lu\tlong int\n", sizeof(long int));
	printf("%lu\tint\n", sizeof(int));
	printf("%lu\tchar\n", sizeof(char));

	printf("\n");

	printf("%lu\tlong int *\n", sizeof(long int *));
	printf("%lu\tint *\n", sizeof(int *));
	printf("%lu\tchar *\n", sizeof(char *));

	printf("\n");

	printf("Initial values:\n");

	printAllContents(longIntegerPointer, integerPointer, characterPointer);

	printf("Initial addresses:\n");

	printAllAddresses(longIntegerPointer, integerPointer, characterPointer);

	printf("\n");

	longIntegerPointer++;
	integerPointer++;
	characterPointer++;

	printf("Values after unitary increase:\n");

	printAllContents(longIntegerPointer, integerPointer, characterPointer);

	printf("Addresses after unitary increase:\n");

	printAllAddresses(longIntegerPointer, integerPointer, characterPointer);

	printf("\n");

	return 0;
}

void printAllContents(long int *lip, int *ip, char *cp){
	printf("%lx\n", *lip);
	printf("%x\n",  *ip);
	printf("%x\n",  *cp);
}

void printAllAddresses(long int *lip, int *ip, char *cp){
	printf("%p\n", lip);
	printf("%p\n", ip);
	printf("%p\n", cp);
}
