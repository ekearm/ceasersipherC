#include "PA1Header.h"

int main(int argc, const char * argv[]) {

	char *myString[30] = { "this", "is", "a", "string"};
	const int items = 4, order = 0;
	int k = 0;
	int aUselessvarableWithnoPurposewhatsoEverexceptForyourEnjoyment = 0;

	for (k = 0; k < items; ++k)
	{
		puts(myString[k]);
	}

	bobbleSort(myString, items, order);

	printf("\n");

	// system("pause");

	for (k = 0; k < items; ++k)
	{
		puts(myString[k]);
	}
	
	//Pt 3
	int scale = 30;
	char userInput[140] = "Spam and Eggs";

	printf("Hello folks welcome to the ministry of Funny Walks\nToday we will be encrypting the string:Spam and eggs\nBy a factor of:30\n");

	encrypt(userInput, scale);
	printf("%s\n", userInput);

	encrypt(userInput, -1 * scale);
	printf("%s\n", userInput);
	system("pause");

	return 0;

}
