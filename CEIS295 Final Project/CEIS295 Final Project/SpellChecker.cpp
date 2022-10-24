#include "SpellChecker.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <conio.h>

using namespace std;

//lower case alphabets.
char lower_alpha[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };


SpellChecker::SpellChecker() {} // Constructor

SpellChecker::~SpellChecker() {}// Destructor

// Spell checking function
void SpellChecker::checkSpelling(HashtableString *table, string input)
{   
    int len, flen, correct = 0;
    len = input.length();
    for (int i = 0; i < len; i++)
        input[i] = tolower(input[i]);

    if (table->findItem(input))
    {
        correct = 1;
        cout << endl << "Spelling is correct" << endl;
    }    
    else if (!table->findItem(input))
    {
        int missing = 0, extra = 0, mixed = 0, incorrect = 0, exchanged = 0;
        cout << endl << "Spelling is wrong. Possible right spellings are given below:- " << endl << endl;
        missing = missingCharacter(table, input);
        extra = extraCharacter(table, input);
        mixed = mixedExtraMissing(table, input);
        incorrect = incorrectArrangement(table, input);
        exchanged = exchangedCharacters(table, input);
        if (missing == 0 && extra == 0 && mixed == 0 && incorrect == 0 && exchanged == 0)
        {
            cout << endl << "No such word exist" << endl;
        }
    }
    cout << endl << "Press any key to continue..." << endl << endl;

    _getch();
    system("cls");
}


//function to show the correct spelling if arrangement of word is incorrect.
int SpellChecker::incorrectArrangement(HashtableString *table, string input)
{    
    int found = 0;
    if (!table->findItem(input))
    {
        string Xinput = input, Ninput, permutations, Tinput;
        int len = Xinput.size();
        for (int i = 1; i < Xinput.length(); i++)
            Ninput.push_back(input[i]);
        Xinput.resize(1);
        sort(Ninput.begin(), Ninput.end());
        Tinput = Xinput + Ninput;
        if (table->findItem(Tinput))
        {
            found = 1;
            cout << Tinput << endl;
            
        }
    }
    return found;
}

//function to show correct spelling if exchanged character is present in the given word
int SpellChecker::exchangedCharacters(HashtableString *table, string input)
{
    int found = 0, len = input.size(), pos, stringLen;
    string front, back, firstChar, secondChar, ExChars;
    for (int i = 1; i < len - 1; i++)
    {
        front = input.substr(0, i);
        firstChar = input.substr(i, 1);
        secondChar = input.substr(i + 1, 1);
        pos = front.size() + 2;
    }
    if (pos < len)
    {
        stringLen = len - (front.size() + 2);
        back = input.substr(pos, stringLen);
        ExChars = front + secondChar + firstChar + back;
    }
    else
        ExChars = front + secondChar + firstChar;
    if (table->findItem(ExChars))
    {
        found = 1;
        cout << ExChars << endl;
    }
    return found;
}

//function to show correct spelling when there is a missing character in the given word.
int SpellChecker::missingCharacter(HashtableString* table, string input)
{
    string Xinput, MissInput, Front, Back;
    int found = 0;
    if (!table->findItem(input))
    {
        for (int i = 0; i < 26; i++)
        {
            Xinput = input + lower_alpha[i];
            int len = Xinput.size();
            if (!table->findItem(Xinput))
            {
                for (int j = 1; j < len; j++)
                {
                    Front = input.substr(0, j);
                    int pos = Front.size();
                    int stringLen = (input.size() - Front.size());
                    Back = input.substr(pos, stringLen);
                    MissInput = Front + lower_alpha[i] + Back;
                    if (table->findItem(MissInput))
                    {
                        cout << MissInput << endl;
                        found = 1;
                    }
                }
            }
        }
        return found;
    }
}

//function to show correct spelling of there is an extra character in given word.
int SpellChecker::extraCharacter(HashtableString *table, string input)
{
    string ExtInput, Ninput, Tinput;
    int found = 0;   
    if (!table->findItem(input))
    {
        int len = input.size();
        for (int i = 1; i < len; i++)
        {
            ExtInput = input;
            ExtInput.erase(ExtInput.begin() + i);
            if (table->findItem(ExtInput))
            {
                found = 1;
                cout << ExtInput << endl;
                break;
            }

        }
    }
    return found;
}

//function to show right spelling when given word has wrong extra character and right one is missing.
int SpellChecker::mixedExtraMissing(HashtableString *table, string input)
{
    string MixExInput;
    int found = 0;
    if (!table->findItem(input))
    {
        int len = input.size();
        for (int i = 1; i < len; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                MixExInput = input;
                MixExInput.erase(MixExInput.begin() + i);
                MixExInput.resize(len, 'a');
                MixExInput[len - 1] = lower_alpha[j];
                sort(MixExInput.begin() + 1, MixExInput.end());
                if (table->findItem(MixExInput))
                {
                    found = 1;
                    cout << MixExInput << endl;
                    break;
                }
            }
            if (found == 1) break;
        }
    }
    return found;
}
