//Jodie Butterworth, Brandon Kidd, Michael Thompson, Matt Heckler - PACE 9
//CSC 201
//11-25-19
// Edited by group I'm Hungry / PACE #7

#include <iostream> //added by PACE #7
#include <string> //added by PACE #7
#include "battleship.hpp" //added by PACE #7

using namespace std;

//PACE 7 - needed forward declaration so moved const outside of main
const int BOARD_SIZE = 10; //PACE 7 - Since row and column sizes are both ten, no use in having two constants for them

//Added by PACE 7 - Asks user if they want to play the game and error checks the response
// This function was created because of the bool gameON - the game needs to be turned on somehow
// Pre: prompt variable exits
// Post: valid response recorded in variable prompt
void GetCheckPrompt(int &prompt);

// Function to create a gameboard
// Pre: none
// Post: gameboard is created, probably best to use an array and convert the letter and number square ids to strings
void Gameboard(string battleArray[][BOARD_SIZE]); //PACE 7 replaced boardSize with constant BOARD_SIZE

// Function to create ships
// Pre: gameboard array ready
// Post: ship locations will be determined based on a random number. Will have to make sure that a ship stay on the board. Will have five different ship types. Structs for battleships.
void Ships(string battleArray[][BOARD_SIZE], string battleship[]); //PACE 7 replaced boardSize with constant BOARD_SIZE

// Function to get user guess
// Pre: gameboard is set up and ships are in place
// Post: The computer gets the user's guess
void UserGuess (string &guess); //PACE 7 - changed the guess from pass by value to pass by reference
                                //because the original value needed to be changed-

// Function to change gameboard
// Pre: gameboard is set up, ships are in place and user has guessed a location
// Post: The computer compares the user's guess to the location of the ships (the values that the ships contain) and changes the gameboard and responses based on the correct answers. The gameboard should update and display to show the results (not sure if this should be the Gameboard function or a new function yet)
bool KaBoom(string battleArray[][BOARD_SIZE], string shipArray[], string guess); //PACE 7 replaced boardSize with constant BOARD_SIZE

int main(){
    //int ROW_MAX = 10; //Maximum row size - original comment
    //int COL_MAX =10; //Maximum Column size - original comment

    int prompt; //PACE 7 - holds the user input value
    string battleArray[BOARD_SIZE][BOARD_SIZE]; //PACE 7 replaced boardSize with constant BOARD_SIZE
    string shipArray[BOARD_SIZE][BOARD_SIZE];
    string guess;
    bool gameON = false;

    GetCheckPrompt(prompt); //Ask user if they want to play the game

    if (prompt == 2)
        gameON = true;

    while (gameON == true){
        //loop thourgh all the functions while there are still ships to find - original comment
        //KaBoom is true when all ships are found or when user decides to quit - original comment
        Gameboard(battleArray); //check to see if the completed function works
        Ships(battleArray, shipArray);
        UserGuess (guess);
        KaBoom(battleArray,shipArray,guess);
        gameON = false; //this was added so that the functions may be tested, but does not have an infinite loop
                        //because the functions are not complete
     }
     return 0;
}

void GetCheckPrompt(int &prompt){
    cout << "Call GetCheckPrompt";
    cout << "Would you like to play Battleship? 1 for no and 2 for yes"; //ask user if they want to start the game
    cin >> prompt; //record response

    //check response
    while (((prompt != 1) && (prompt != 2)) || !prompt) {

        cout << "Invalid input. ";
        cin.clear();    //clears the error flag
        cin.ignore(100, '\n'); //ignore the buffer until newline
        cin >> prompt; //get new input
    }
}
void Gameboard (string battleArray[][BOARD_SIZE]){
      cout << "\nCall GameBoard";
      //format and fill the gameboard
      cout << "---------------------\n";
      for (int i = 0; i < BOARD_SIZE; i++){ //increments the columns in the board
            for ( int j = 0; j < BOARD_SIZE; j++) { //PACE 7 - increments the rows of the board
                battleArray[i][j] = "~"; //fill an empty board with "water"
                cout << "|" << battleArray[i][j]; //display it
            }
          cout << "|\n---------------------\n";
      }
}

void Ships(string battleArray[][BOARD_SIZE], string shipArray[]){
    cout << "\nCall Ships";
   //use random value for first space of ship's location - original comment
   //fill in remaining spaces in a straight line up, down or to the sides - original comment
   //save a list of different ships, array of arrays or array to structs - original comment
}

void UserGuess (string &guess){
    cout << "\nCall UserGuess";
    //asks user for guess and records it in a string - original comment
    cout << "\nPlease enter your guess in the form: row column (4 7)"; //PACE 7 - prompt for guess
    cin >> guess; //PACE 7 - record the guess
}

bool KaBoom(string battleArray[][BOARD_SIZE], string shipArray[], string guess){
    cout << "\nCall KaBoom";
    //compares user guess to the ship values
    //changes the gameboard and notifies the user if its a hit or a miss - original comment
    //returns true if user quits or all the ships are found - original comment
}
