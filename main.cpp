#include <iostream> 
using namespace std; 

const int NUM_ROWS = 4;
const int NUM_COLS = 3;

int main(){
  int values[NUM_ROWS][NUM_COLS];
  //read in 12 integers; 4 rows; 3 columns and store in 2d array
  for(int row = 0; row < NUM_ROWS; row++){
    for(int cols = 0; cols < NUM_COLS; cols++){
      cin >> values[row][cols];
    }
  }
  //print out the 2d array in reverse order according to both rows and columns
  for(int row = NUM_ROWS - 1; row >= 0; row--){
    for(int cols = NUM_COLS - 1; cols >= 0; cols--){
      cout << values[row][cols] << " ";
    }
    cout << endl;
  }
  return 0;
}
