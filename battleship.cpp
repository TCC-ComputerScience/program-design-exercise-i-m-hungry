//Jodie Butterworth, Brandon Kidd, Michael Thompson, Matt Heckler - PACE 9
//CSC 201
//11-25-19
// Edited by group I'm Hungry / PACE #7

#include <iostream> //added by PACE #7
#include <string> //added by PACE #7
#include <"battleship.hpp"> //added by PACE #7

// Function to create a gameboard
// Pre: none
// Post: gameboard is created, probably best to use an array and convert the letter and number square ids to strings
void Gameboard (string battleArray[][BOARD_SIZE]); //PACE 7 replaced boardSize with constrant BOARD_SIZE

// Function to create ships
// Pre: gameboard array ready
// Post: ship locations will be determined based on a random number. Will have to make sure that a ship stay on the board. Will have five different ship types. Structs for battleships.
void Ships(string battleArray[][BOARD_SIZE], battleship []); //PACE 7 replaced boardSize with constrant BOARD_SIZE

// Function to get user guess
// Pre: gameboard is set up and ships are in place
// Post: The computer gets the user's guess
void UserGuess (string guess);

// Function to change gameboard
// Pre: gameboard is set up, ships are in place and user has guessed a location
// Post: The computer compares the user's guess to the location of the ships (the values that the ships contain) and changes the gameboard and responses based on the correct answers. The gameboard should update and display to show the results (not sure if this should be the Gameboard function or a new function yet)
bool KaBoom(string battleArray[][BOARD_SIZE], string shipArray[], string guess); //PACE 7 replaced boardSize with constrant BOARD_SIZE

int main(){
    //int ROW_MAX = 10; //Maximum row size - original comment
    //int COL_MAX =10; //Maximum Column size - original comment
    int BOARD_SIZE = 10; //Since row and column sizes are both ten, no use in having two constants for them
    string battleArray[BOARD_SIZE][BOARD_SIZE]; //PACE 7 replaced boardSize with constrant BOARD_SIZE
    string guess;
    bool gameON = false;
    while (gameON != true){
        //loop thourgh all the functions while there are still ships to find - original comment
        Gameboard(battleArray);
        //KaBoom is true when all ships are found or when user decides to quit - original comment
     }
     return 0;
}

void Gameboard (string battleArray[][boardSize]){
   for (int i = 0; i < boardSize; i++){


   }
}

void Ships(string battleArray[][boardSize], string shipArray[]){
   //use random value for first space of ship's location - original comment
   //fill in remaining spaces in a straight line up, down or to the sides - original comment
   //save a list of different ships, array of arrays or array to structs - original comment
}

void UserGuess (string guess){
   //asks user for guess and records it in a string - original comment
}

bool KaBoom(string battleArray[][boardSize], string shipArray[], string guess){
   //compares user guess to the ship values
   //changes the gameboard and notifies the user if its a hit or a miss - original comment
   //returns true if user quits or all the ships are found - original comment
}
