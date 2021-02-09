#include <iostream>
#include "Working.h"
#include "Queens1.h"

bool Solution(int board[N][N], int col) {
   if (col >= N)
      return true;
   for (int i = 0; i < N; i++) {
      if (Working(board, i, col) ) {
         board[i][col] = 1;
         if ( Solution(board, col + 1))
            return true;
         board[i][col] = 0;
      }
   }
   return false;
}
