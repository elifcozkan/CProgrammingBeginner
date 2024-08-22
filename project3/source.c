#define _CRT_SECURE_NO_WARNINGS
/*
Author	:	ELIF OZKAN
Contact	:	elifcozkan@gmail.com
About	:	This project is about arrays and some basic algorithms
*/

/* Contents
1.	Write a code that takes all the input lines till the new line comes.
2.
3.
4.
5.
6.
7.
8.
9.
10.
11.
*/


#include "source.h"
#define SIZE 10
#define SIZESTRING 1000
char ans[] = "";


void main(void) {


	NU printf("Write the example you want to see: \n");
	int exNum = 0;
	NU scanf("%d", &exNum);

	switch (exNum)
	{
	case 1:
		NU printf("Write a code that takes all the input lines till the new line.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);


		if (ans[0] == 'y') {
			freeStandardInputBuffer();


			char userInput[SIZESTRING];
			stringGets(userInput);
			NU printf("You wrote [%s]\n", userInput);

			NU printf("\n");
			break;
		}
		else {
			break;
		}
	} // END OF SWITCH



}

void freeStandardInputBuffer(void) {
	for (int ch = getchar(); ch != '\n'; ch = getchar()) {
		;
	}
}

void stringGets(char* ch) {
	NU printf("Please write something \n");
	while ((ch = getchar()) != '\n' && ch != EOF) {
		*ch++ = (char)ch;
	}
	*ch = '\0';
}