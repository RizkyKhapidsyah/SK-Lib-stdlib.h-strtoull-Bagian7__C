#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str[] = "123 10 555";
	char* pEnd;

	unsigned long long int val1 = strtoull(str, &pEnd, 10);
	unsigned long long int val2 = strtoull(pEnd, &pEnd, 10);
	unsigned long long int val3 = strtoull(pEnd, &pEnd, 10);

	//Menampilkan Hasil
	printf("val1 = %lu\n", val1);
	printf("val2 = %lu\n", val2);
	printf("val3 = %lu\n", val3);

	_getch();
	return 0;
}