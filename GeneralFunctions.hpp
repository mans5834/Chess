#include <iostream>

using namespace std;

//start of function declarations
void ChessBoard();
//end of function declarations

void ChessBoard(){
  for(int z = 0; z < 8; z++){
    for(int y = 0; y < 49; y++){
      cout << "-";
    }
    for(int y = 0; y < 8; y++){
      cout << "|     |     |     |     |     |     |     |     |" << endl;
    }
  }
  for(int y = 0; y < 49; y++){
    cout << "-";
  }
}
