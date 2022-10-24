// Project Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ---------------------------------------------------------------
// Programming Assignment:	CIS170 Course Project
// Developer:			    Robert Mines
// Date Written:			6/17/2020
// Purpose:				Playlist Organizer V7 
// ---------------------------------------------------------------


#include <iostream>//Including necessary libraries
#include <string>//for working with strings, manipulating
#include <ostream>//input\output, & other functions.
#include <iomanip>
# include <fstream>
using namespace std;
//Declaration of the programs created functions.
void showPlaylist(), getPlaylist(), userMenu(), menuSelect(), showPlaylist2(), getPlaylist2();
void savePlaylist(), loadPlaylist(), savePlaylist2(), loadPlaylist2();
int  programEnd();

string titles[100], artists[100], genres[100], line;//Global array & variable declartaions.
int durations[100], durationTotal, durationAvg, durationTotal2, durationAvg2, songCount = 3, i, selection, playlistLength, playlistLength2;
ifstream inputFile;
ofstream outputFile;
const int CREATE = 1, DISPLAY = 2, CREATE2nd = 3, DISPLAY2nd = 4, EXIT = 9;
const int SAVE = 5, SAVE2nd = 6, LOAD = 7, LOAD2nd = 8;

int main()//Beginning the program
{
    cout << "Welcome to the playlist organizer! \n";//Greet user
    userMenu();//Menu displays & program begins.
    menuSelect();//Gets input, validates input, & calls functions

}

void userMenu()//Function displays the menu & calls the function to get the 
{             //user's selection.
    cout << "Please make a selection from the options below: \n" << endl;
    cout << "To CREATE playlist 1, please enter: 1 \n" << endl;
    cout << "To DISPLAY playlist 1, please enter: 2 \n" << endl;
    cout << "To SAVE playlist 1, please enter: 3 \n" << endl;
    cout << "To LOAD playlist 1, please enter: 4 \n" << endl;
    cout << "To CREATE playlist 2, please enter: 5 \n" << endl;
    cout << "To DISPLAY playlist 2, please enter: 6 \n" << endl;
    cout << "To SAVE playlist 2, please enter: 7 \n" << endl;
    cout << "To LOAD playlist 2, please enter: 8 \n" << endl;
    cout << "To EXIT the playlist creator, please enter: 9, \n";
    menuSelect();
    return;
}

void menuSelect()//Function to get the users selection from the menu.
{
    selection = 0;
    cout << "Please enter your selection: " << endl;
    cin >> selection;
    switch (selection) { //Switch statement for a better menu.
    case 1:
        getPlaylist();//Calling of the getPlaylist function.
        break;
    case 2:
        showPlaylist();//Calling of the showPlaylist function.
        break;
    case 3:
        savePlaylist();//Calling of the getPlaylist2 function
        break;
    case 4:
        loadPlaylist();//Calling of the showPlaylist2 function
        break;
    case 5:
        getPlaylist2();//Calling of the newly added savePlaylist function
        break;
    case 6:
        showPlaylist2();//Calling of the newly added savePlaylist2 function
        break;
    case 7:
        savePlaylist2();//Calling of the newly added loadPlaylist function
        break;
    case 8:
        loadPlaylist2();//Calling of the newly added loadPlaylist2 function
        break;
    case 9:
        programEnd();//Calling of the programEnd function
        break;
    default://Invalid input error followed by calling of the programEnd function.
        cout << "Invalid entry, please run the program again & enter 1, 2, or 3" << endl;
        programEnd();
        break;
    }
    userMenu();
}

int programEnd()//Ends the program when 2 is selected from the menu.
{
    exit(0);//Newly updated inclusion of exit function the endProgram function
}          //which improved the operation.
void getPlaylist()//Current function to Get & Display playlist
{
    cout << "Enter the number of songs up to 50 : ";
    cin >> playlistLength;

    for (i = 0; i < playlistLength; i++) {
        cout << "Enter the TITLE of the song:  " << endl;
        cin.ignore();
        getline(cin, titles[i]);//This loop gets the playlist information
        cout << "Enter the ARTIST name:  " << endl;//from the user.
        getline(cin, artists[i]);
        cout << "Enter the songs GENRE:  " << endl;
        getline(cin, genres[i]);
        cout << "Enter the songs DURATION rounded to the nearest minute: " << endl;
        cin >> durations[i];
        cout << endl;
    }
    userMenu();
    return;
}

void showPlaylist()//Newly updated to be successfully integrated into the program separately
{                  //along with slight aesthetic improvements to the output.
    cout << "\nHere is your playlist: \n" << "TITLE" << "   " << "ARTIST" << "   " << "GENRE";
    cout << "   " << "DURATION" << "\n" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;

    for (i = 0; i < playlistLength; i++) {
        cout << titles[i] << "   " << artists[i] << "   " << genres[i] << "   " << durations[i] << " minutes \n" << endl;
    }
    cout << "-------------------------------------------------------------------------------" << endl;
    durationTotal = 0;
    for (i = 0; i < playlistLength; i++) {
        durationTotal = durationTotal + durations[i];//Calculating total duration
    }
    durationAvg = durationTotal / playlistLength;//Calculating average duration
    cout << "Total length: " << durationTotal << " minutes. Average song length: " << durationAvg << " minutes. \n";
    return;
}

void getPlaylist2()//Current function to Get & Display playlist
{
    cout << "Enter the number of songs up to 50 : ";
    cin >> playlistLength2;
   
    playlistLength2 = playlistLength2+50;
    for (i = 50; i < playlistLength2; i++) {
        cout << "Enter the TITLE of the song:  " << endl;
        cin.ignore();
        getline(cin, titles[i]);//This loop gets the playlist information
        cout << "Enter the ARTIST name:  " << endl;//from the user.
        getline(cin, artists[i]);
        cout << "Enter the songs GENRE:  " << endl;
        getline(cin, genres[i]);
        cout << "Enter the songs DURATION rounded to the nearest minute: " << endl;
        cin >> durations[i];
        cout << endl;
    }
    playlistLength2 = playlistLength2 - 50;
    userMenu();
    return;
}

void showPlaylist2()//Newly updated to be successfully integrated into the program separately
{                  //along with slight aesthetic improvements to the output.
    cout << "\nHere is your playlist: \n" << "TITLE" << "   " << "ARTIST" << "   " << "GENRE";
    cout << "   " << "DURATION" << "\n" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    
    playlistLength2 = playlistLength2 + 50;
    for (i = 50; i < playlistLength2; i++) {
        cout << titles[i] << "   " << artists[i] << "   " << genres[i] << "   " << durations[i] << " minutes \n" << endl;
    }
    durationTotal2 = 0;
    for (i = 50; i < playlistLength2; i++) {
        durationTotal2 = durationTotal2 + durations[i];//Calculating total duration
    }
    playlistLength2 = playlistLength2 - 50;
    durationAvg2 = durationTotal2 / playlistLength2;//Calculating average duration
    cout << "Total length: " << durationTotal2 << " minutes. Average song length: " << durationAvg2 << " minutes. \n";
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Total length: " << durationTotal2 << " minutes. Average song length: " << durationAvg2 << " minutes. \n";
    return;
}

void savePlaylist()
{
    outputFile.open("Playlist1.txt");
    cout << "Now saving your playlist...\n" << endl;
    
    outputFile << playlistLength;
    for (int i = 0; i < playlistLength; i++)
        outputFile << titles[i] << "\n" << artists[i] << "\n" << genres[i] << "\n" << durations[i] << "\n";

    outputFile.close();
    cout << "Your playlist has saved" << endl;
    return;
}

void loadPlaylist()
{
    inputFile.open("Playlist1.txt");
    cout << "Now loading your playlist...\n" << endl;

    if (!inputFile) {
        cout << "There was a problem loading the file" << endl;
        system("Pause");
        userMenu();
    }

    inputFile >> playlistLength;
    int i = 0;
    while (i < playlistLength) {
        inputFile >> titles[i];
        inputFile >> artists[i];
        inputFile >> genres[i];
        inputFile >> durations[i];
        i++;
    }

    inputFile.close();
    cout << "Playlist now loaded." << endl;
    return;
}

void savePlaylist2()
{
    outputFile.open("Playlist2.txt");
    cout << "Now saving your playlist...\n" << endl;
    
    outputFile << playlistLength2;
    playlistLength2 = playlistLength2 + 50;
    for (int i = 50; i < playlistLength2; i++)
        outputFile << titles[i] << "\n" << artists[i] << "\n" << genres[i] << "\n" << durations[i] << "\n";
    playlistLength2 = playlistLength2 - 50;
    outputFile.close();
    cout << "Your playlist has saved" << endl;
    return;
}

void loadPlaylist2()
{
    inputFile.open("Playlist2.txt");
    cout << "Now loading your playlist...\n" << endl;

    if (!inputFile) {
        cout << "There was a problem loading the file" << endl;
        system("Pause");
        userMenu();
    }

    playlistLength2 = playlistLength2 + 50;
    int i = 50;
    while (i < playlistLength2) {
        inputFile >> titles[i];
        inputFile >> artists[i];
        inputFile >> genres[i];
        inputFile >> durations[i];
        i++;
    }
    playlistLength2 = playlistLength2 - 50;
    inputFile.close();
    cout << "Playlist now loaded." << endl;
    return;
}