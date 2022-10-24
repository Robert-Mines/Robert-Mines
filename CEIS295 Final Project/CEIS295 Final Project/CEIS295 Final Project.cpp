#include "SpellChecker.h"
#include "HashTableString.h"
#include <fstream>
#include <iostream>
#include <time.h>
#include <string>
using namespace std;


int main()
{
	HashtableString dictionary(500);
    SpellChecker SpChk;
    ifstream file;
    string word, input, filename;
    int count = 0, choice = 0;

    // opening dictionary file 
    file.open("Dictionary.txt");
    if (file.fail())
    {
        cout << "Error: Failed to open file";
        return 0;
    }

    // extracting words into the hashtable 
    while (file >> word)
    {
        dictionary.insertItem(word);
        count++;
    }
    file.close();
    cout << "Successfully loaded " << count << " words into the dictionary" << endl;

    do
    {
        cout << "\tEnter A Selection" << endl;
        cout << "1: Check Spelling\n2: Quit" << endl;
        cin >> choice;
        // User menu
        switch (choice)
        {
        case 1:

            cout << "Enter a word to spell check..." << endl;
            cin.ignore();
            getline(cin, input);
            SpChk.checkSpelling(&dictionary, input);
            break;
        case 2:
            cout << "Come back again soon :)";
            break;
        default:
            cout << "Error: Ivalid selection, try again";
        }
    } while (choice != 2);


	
}