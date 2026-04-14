class Solution {
public:

bool isSafe(vector<vector<char>>& board, char values, int i, int j){
                               
                                         // i -> current row
                                         // j -> current col

   //Row check
   for(int col=0; col<9; col++){
     if(board[i][col]==values){
      return false;
     }
   }
   //Col check
   for(int row=0; row<9; row++){
    if(board[row][j]== values){
      return false;
    }
   }
   // 3*3 box check
   for(int k=0; k<9; k++){
      if(board[3*(i/3) + (k/3)][3*(j/3) + (k%3)] == values){
      return false;
      }
   }
  return true;
}



// this function will return true if sol found otherwise false
bool solve(vector<vector<char>>& board){

 int n= board[0].size();
   // traverse kiya board pr
   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){

         // check for an empty cell
         if(board[i][j] =='.'){

            // if found then put values from 1 to 9
            for(char values ='1'; values<='9'; values++){

               // Ab apan check krege value dalna safe h yha nhi
               if(isSafe(board,values,i,j)){

                  // Agr safe h to then insert the value
                  board[i][j] = values;

                  //Recursion
                  bool aageKaSolution = solve(board );
            
                  // iss ki vajah se base case nhi likna pda
                  if(aageKaSolution==true){
                     return true;
                  }
                  // otherwise we have to do backtracking
                  board[i][j]='.';
               }
            }
            return false;
         }
      }
   }
   return true;
}
    void solveSudoku(vector<vector<char>>& board) {
        
        solve(board);
    }
};