#include "lab6.h"

int main(void) {

	FILE* infile = fopen("numbers.txt", "r");

	int sum = sumNum(infile);

	printf("%d\n", sum);
	ifPrime(sum);

	fclose(infile);
	return 0;
}