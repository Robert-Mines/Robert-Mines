#pragma once
#include "HashTableString.h"


class SpellChecker
{
public:
	SpellChecker(); // Constructor
	~SpellChecker(); // Destructor
	// Spell Checking Function
	void checkSpelling(HashtableString *table, string input);
private:
	// Private functions called by checkSpelling function
	int exchangedCharacters(HashtableString *table, string input);
	int incorrectArrangement(HashtableString *table, string input);
	int extraCharacter(HashtableString *table, string input);
	int missingCharacter(HashtableString *table, string input);
	int mixedExtraMissing(HashtableString *table, string input);

};

