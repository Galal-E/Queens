#include <iostream>
#include "Queens2.h"
#include "Queens1.h"
#include "print.h"

bool check(){
 int board[N][N];
   for(int i = 0; i<N; i++)
   for(int j = 0; j<N; j++)
   board[i][j] = 0;
   if (Solution(board, 0) == false ) {
      cout << "Solution is not valid";
      return false;
   }
   print(board);
   return true;
}
