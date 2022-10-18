// Jordan Brown 
// CIS 1202.800
// Oct. 18, 2022

#include <iostream>

using namespace std;

//Function Prototypes
char character(char , int);

int main()
{
	bool again = true;
	char letter;
	int num;
	while (again)
	{
		try
		{
			cout << "Input a beginning letter.\n";
			cin >> letter;
			cout << "How much do you want to offset?\n";
		}
	}
	return 0;
}

char character(char start, int offset)
{
	char newChar;
	string invalidCharacterException, invalidRangeException;
	invalidCharacterException = "ERROR: Please input an uppercase or lowercase letter.\n";
	invalidRangeException = "ERROR: Offset is out of range.\n";
	if (!isupper(start) && !islower(start))
		throw invalidCharacterException;
	newChar = start + offset;
	if (isupper(start) && !isupper(newChar))
		throw invalidRangeException;
	if (islower(start) && !islower(newChar))
		throw invalidRangeException;
	return newChar;
}