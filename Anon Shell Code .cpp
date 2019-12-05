//Jodie Butterworth, Brandon Kidd, Michael Thompson, Matt Heckler - PACE 9
//CSC 201
//11-25-19
// Edited by goup I'm Hungry / PACE #7

Function to create a gameboard
Pre: none
Post: gameboard is created, probably best to use an array and convert the letter and number square ids to strings
void Gameboard (string battleArray[][boardSize]);

Function to create ships
Pre: gameboard array ready
Post: ship locations will be determined based on a random number. Will have to make sure that a ship stay on the board. Will have five different ship types. Structs for battleships.
void Ships(string battleArray[][boardSize], battleship []);

Function to get user guess
Pre: gameboard is set up and ships are in place
Post: The computer gets the user's guess
void UserGuess (string guess);

Function to change gameboard
Pre: gameboard is set up, ships are in place and user has guessed a location
Post: The computer compares the user's guess to the location of the ships (the values that the ships contain) and changes the gameboard and responses based on the correct answers. The gameboard should update and display to show the results (not sure if this should be the Gameboard function or a new function yet)
bool KaBoom(string battleArray[][boardSize], string shipArray[], string guess);

int main(){
  int ROW_MAX = 10; //Maximum row size
  int COL_MAX =10; //Maximum Column size
  string battleArray[ROW_MAX][COL_MAX];
   string guess;
   bool gameON = false;
   while (gameON != true){
      loop thourgh all the functions while there are still ships to find
      KaBoom is true when all ships are found or when user decides to quit
   }
   return 0;
}

void Gameboard (string battleArray[][boardSize]){
   use 2d array to make gameboard and convert to string
}

void Ships(string battleArray[][boardSize], string shipArray[]){
   use random value for first space of ship's location
   fill in remaining spaces in a straight line up, down or to the sides
  save a list of different ships, array of arrays or array to structs
}

void UserGuess (string guess){
   asks user for guess and records it in a string
}

bool KaBoom(string battleArray[][boardSize], string shipArray[], string guess){
   compares user guess to the ship values
   changes the gameboard and notifies the user if its a hit or a miss
   returns true if user quits or all the ships are found
}
