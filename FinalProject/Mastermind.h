#include <string>

//Function that takes in the guess, check if it's true
//Function that chooses a random word from the array


class Mastermind
{
private:
	std::string word;
	std::string arr[100] = { "Girl", "Dear", "Deer", "Blue", "Abba", "Abby", "Abed", "Abel", "Burl", "Burn", "Buro", "Burp", "Burr", "Burt", "Bury", "Bush" };
protected:
public:
	Mastermind();
	//~Mastermind();
	void setRandomWord();
	bool guess(std::string userGuess);
	std::string getWord() { return word; }
	
};