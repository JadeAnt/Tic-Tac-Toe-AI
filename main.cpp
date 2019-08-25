#include <iostream>
#include <string>
#include "stack.h"

using namespace std;

#define NR_ROWS 3
#define NR_COLUMNS 3

/* TO DO
-Make sure is in it's most reduced form, if not reduce it
-Check code for errors / inconsistencies before moving onto AI component
-Test and check
-Decide whether to use a queue or a stack for the AI component
-Implement either one to consider the user's actions in order for the AI to decide the best move
*/

chr gameBoard[NR_ROWS][NR_COLUMNS];// the game board

//Position struct has already been initialized in stack.h

//stack functions have been created in stack.h, can now be called
Stack gameMoves; 

void CreateBoard(){  ////creates a new game board
  for(int i = 0; i < NR_ROWS; i++){
     for(int j = 0; j < NR_COLUMNS; j++){
        gameBoard[i][j] = " ";
        printf("| %c |", gameBoard[i][j]);
     }
    cout<< "_______________" << "\n";
  }
  
  PrintBoard();
}

void PrintBoard(){  //displays board after each move
  for(int i = 0; i < NR_ROWS; i++){
    for(int j = 0; j < NR_COLUMNS; j++){
      printf( "| %c |", gameBoard[i][j]);
    }
   cout << "_______________" << "\n";
  }
  
}

void Check_if_Full_Board(){ //checks if the board is full after both moves
  int full_spaces;
  
  for(int i = 0; i < NR_ROWS; i++){
    for(int j = 0; j < NR_COLUMNS; j++){
      if(gameBoard[i][j] == "| X |" || gameBoard[i][j] == "| O |")
        full_spaces++;
    }
  }
  
  if(full_spaces == 9)
    return 1;
  else
    return 0;
}

void Input(position User){  //allows User to input their character at a specific point
    gameBoard[User.x][User.y] = "| X |";
    PrintBoard();
}

//case 1: horizontal win
int checkHorizontal(){  //checks whether there are 3 in a row for either the Ai or User
 
  if( gameBoard[0][0] == gameBoard[0][1] && gameBoard[0][1] == gameBoard[0][2] ){
    if(gameBoard[0][1] == "| X |"){
      cout << "CONGRATULATIONS YOU WIN \n";
      return 1;
    }
    
    else if(gameBoard[0][1] == "| O |"){
      cout << "YOU LOSE \n";
      return 0;
    }
    
    else
      break;
  }
  
  else if(gameBoard[1][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[1][2]){
    if(gameBoard[1][1] == "| X |"){
      cout << "CONGRATULATIONS YOU WIN \n";
      return 1;
    }
    
    else if(gameBoard[1][1] == "| O |"){
      cout << "YOU LOSE \n";
      return 0;
    }
    
    else
      break;
  }
  
  else if(gameBoard[2][0] == gameBoard[2][1] && gameBoard[2][1] == gameBoard[2][2]){
    if(gameBoard[2][1] == "| X |"){
      cout << "CONGRATULATIONS YOU WIN \n";
      return 1;
    }
    
    else if(gameBoard[2][1] == "| O |"){
      cout << "YOU LOSE \n";
      return 0;
    }
    
    else
      break;
  }
  
  return 2; //no winner
}

//case 2: vertical win
int checkVertical(){ //checks whether there are 3 in a row for either the Ai or user
  if( gameBoard[0][0] == gameBoard[1][0] && gameBoard[1][0] == gameBoard[2][0] ){
    if(gameBoard[1][0] == "| X |"){
      cout << "CONGRATULATIONS YOU WIN \n";
      return 1;
    }
    
    else if(gameBoard[1][0] == "| O |"){
      cout << "YOU LOSE \n";
      return 0;
    }
    
    else
      break;
  }
  
  else if(gameBoard[0][1] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][1]){
    if(gameBoard[1][1] == "| X |"){
      cout << "CONGRATULATIONS YOU WIN \n";
      return 1;
    }
    
    else if(gameBoard[1][1] == "| O |"){
      cout << "YOU LOSE \n";
      return 0;
    }
    
    else
      break;
  }
  
  else if(gameBoard[0][2] == gameBoard[1][2] && gameBoard[1][2] == gameBoard[2][2]){
    if(gameBoard[1][2] == "| X |"){
      cout << "CONGRATULATIONS YOU WIN \n";
      return 1;
    }
    
    else if(gameBoard[1][2] == "| O |"){
      cout << "YOU LOSE \n";
      return 0;
    }
    
    else
      break;
  }
  
  return 2; // no winner
}

//case 3: a diagonal win
int checkDiagonal(){ //checks whether there are 3 in a row for either the Ai or user
  if( gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2] ){
    if(gameBoard[1][1] == "| X |"){
      cout << "CONGRATULATIONS YOU WIN \n";
      return 1;
    }
    
    else if(gameBoard[1][1] == "| O |"){
      cout << "YOU LOSE \n";
      return 0;
    }
    
    else
      break;
  }
  
  else if(gameBoard[2][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[0][2]){
    if(gameBoard[1][1] == "| X |"){
      cout << "CONGRATULATIONS YOU WIN \n";
      return 1;
    }
    
    else if(gameBoard[1][1] == "| O |"){
      cout << "YOU LOSE \n";
      return 0;
    }
    
    else
      break;
  }
  
  return 2; //no winner
}

int main(){
  
  /* return 0 = Ai win 
     return 1 = User win
     return 2 = no one won yet */
}
