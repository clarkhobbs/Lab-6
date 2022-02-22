#include "lab6.h"

int readFile(FILE* infile) {

	int num = 0;
	fscanf(infile, "%d", &num);

	return num;

}
int sumNum(FILE* infile) {

	int sum = 0;

	while (!feof(infile)) {
		sum += readFile(infile);

	} 

	return sum;
}
void ifPrime(int sum) {

	int divOp = 2;
	int answer = 0;
	bool decide;

	if (sum > 3 && sum % 2 == 0) {
		printf("Not prime");
	}
	else {
		do {
			answer = sum % divOp;
			if (answer == 0 && divOp != sum) {
				decide = false;
				printf("Not prime");
			}
			else {
				decide = true;
			}
			divOp++;
			if (divOp == sum && decide == true) {
				printf("This is a prime number");

			}

		} while (answer != 0 && divOp != sum && decide == true);
	}
}