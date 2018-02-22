#include "PA1Header.h"
/*
<! name: BobbleSort
Parameters: Userinput, items, order
outtputs: Nothing
*/
void bobbleSort(char **userInput, int items, int order)
{
	char *holder = NULL;

	for (int j = 0; j < items; j++) //J is at the end
	{
		for (int k = items - 1; k > 0; k--)
		{
			if (strcmp(userInput[k], userInput[k-1]) > 0 )
			{

				holder = userInput[k];
				userInput[k] = userInput[k - 1];
				userInput[k - 1] = holder;
			}
		}
	}
}

/*
<! name: encrypt
parameters: theString, scale
outputs: nothing
description: takes a poitner to a string and shifts the characters in the string by the scale in place. !>
*/

void encrypt(char* theString, int scale)
{
	for (int i = 0; i < strlen(theString); i++) //Turns the string to upper case.
	{
		theString[i] = toupper(theString[i]);
	}

	for (int i = 0; i < strlen(theString); i++)
	{
		if (theString[i] >= 'A' && theString[i] <= 'Z') //Checks to see if it is a letter
		{
			int newChar = theString[i] + scale; // Taking the Ascii value of our character and shifting it by the scale

			if (newChar < 'A')
			{
				newChar = 'Z' - ('A' - newChar) + 1; //Raps around to Z

			}
			else if (newChar > 'Z')
			{
				newChar = 'A' + (newChar - 'Z') - 1; //Like the if above but the other way!
			}

			theString[i] = newChar; // set the current character in the string to the new character
		}
	}
}