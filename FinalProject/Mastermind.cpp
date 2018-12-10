#include "Mastermind.h"
#include <time.h>
#include <iostream>
using namespace std;

Mastermind::Mastermind()
{
	setRandomWord();
}

void Mastermind::setRandomWord()
{
	srand(time(NULL));
	word = arr[rand() % 16];
}

//check each character
//if it's right and in correct place, print *
//if it's right but incorrect place, print -
//adding a nested else-if for checking position if letters match
//until it is correct, return false
bool Mastermind::guess(string userGuess)
{
	int totalRight = 0;
	int correct = 0;
	for (int i = 0; i < userGuess.length(); i++)
	{
		for (int j = 0; j < word.length(); j++)
		{
			if (tolower(userGuess[i]) == tolower(word[j]))
			{
				if (i == j)
				{
					cout << "*";
					totalRight++;
					break;
				}
				else
				{
					cout << "-";
					correct++;
					break;
				}
			}
		}
	}
	cout << endl;
	if (totalRight == 4)
	{
		return true;
	}
	
	if (totalRight == 0 && correct == 0)
	{
		cout << "Try Again" << endl;
		return false;
	}
	return false;
}