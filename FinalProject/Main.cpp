/**/
#include "Mastermind.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Mastermind ai;
	string guess;
	bool correct = false;
	int guesses = 0;
	char input;
	bool exit = false;
	
	cout << "I have a 4 letter word in mind. Can you guess it?" << endl;
	cout << "* means one of the letters is right and in the right place" << endl;
	cout << "- means one of the letters is right and in the wrong place" << endl;

	do{
		if (correct)
		{
			ai.setRandomWord();
			correct = false;
			guesses = 0;
		}
		while (!correct)
		{
			cout << "Please enter your guess: ";
			cin >> guess;
			correct = ai.guess(guess);
			guesses++;
		}

		if (correct)
		{
			cout << "You did it!!! " << guesses << " tries!" << endl;
			cout << "\nWould you like to play again? (y - yes, n - no); ";
			cin >> input;
			if (input == 'n' || input == 'N')
			{
				exit = true;
			}
		}
	} while (!exit);
	return 0;
}