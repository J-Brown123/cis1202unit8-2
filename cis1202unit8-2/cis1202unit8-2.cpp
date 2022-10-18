// Jordan Brown 
// CIS 1202.800
// Oct. 18, 2022

#include <iostream>
#include <cstring>

using namespace std;

//Function Prototypes
char character(char , int);

int main()
{
	char letter, newChar;
	int num, again = 1;
	while (again)
	{
		try
		{
			cout << "Input a beginning letter.\n";
			cin >> letter;
			cout << "How much do you want to offset?\n";
			cin >> num;
			newChar = character(letter, num);
		}
		catch (string invalidCharacterException)
		{
			cout << invalidCharacterException;
		}
		catch (char invalidRangeException)
		{
			cout << invalidRangeException;
		}
		cout << "The new character is " << newChar << endl;
		cout << "Do you want to do another?\n1 - Yes\n2 - No\n";
		cin >> again;
		while (again < 0 || again > 1)
		{
			cout << "Invalid response.\n1 - Yes\n2 - No\n";
			cin >> again;
		}
	}
	return 0;
}

char character(char start, int offset)
{
	char newChar;
	string invalidCharacterException;
	char invalidRangeException[] = "ERROR: Offset is out of range.\n";
	invalidCharacterException = "ERROR: Please input an uppercase or lowercase letter.\n";
	if (!isupper(start) && !islower(start))
		throw invalidCharacterException;
	newChar = start + offset;
	if (isupper(start) && !isupper(newChar))
		throw invalidRangeException;
	if (islower(start) && !islower(newChar))
		throw invalidRangeException;
	return newChar;
}