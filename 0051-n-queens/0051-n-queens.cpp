class Solution {
public:
void storeSolution(vector<vector<char>> &board, int n, vector<vector<string>> &ans){

    vector<string> temp;
     for(int i=0; i<n; i++){
        string output;
          for(int j=0; j<n; j++){ 
       output.push_back(board[i][j]);
      }
         temp.push_back(output);
     }

         ans.push_back(temp);
   }

bool isSafe(int row, int col, vector<vector<char>> &board , int n){

   //check krna h ki current cell[row, col] m queen rkh skta hu yha nhi

   int i= row; 
   int j= col;

   // hme sirf piche ki 3 direction check krni h 

   //kyuki  ek col m ek hi queen place ho skti hi isliye selected col kr upar aur niche
   // check krne ki zarurat nhi h

   // Aur aage wale col m bhi check nhi krege

   //1 direction -> check left row 
   while(j >= 0){
      if(board[i][j] == 'Q'){
         return false;
      }
      j--;
   }

   // 2-> upper left diagonal
   i = row;
   j =col;
   while(i>=0 && j>=0){
      if(board[i][j] == 'Q'){
         return false;
      }
      i--;
      j--;
   }

   //3 -> bottom left diagonal
    i = row;
   j =col;
   while(i<n && j>=0){
      if(board[i][j] == 'Q'){
         return false;
      }
      i++;
      j--;
   }

   // 3 ho direction m kahi bhi queen nhi mili
   // mtlb position safe h to queen ko place kr do

   return true;
}


void solve(vector<vector<char>> &board , int col, int n,  vector<vector<string>> &ans){

   //Base case
   if(col >= n){
      // N queens are placed in Nn col
      storeSolution(board, n, ans);
      return;
   }

   // 1 case solve kro baki rec dekh lega

   //1 case bole to 0th col  ke har row ke andar queen place krna ka try krna h
    
   for(int row=0; row<n; row++){
      if(isSafe(row , col, board , n )){
         // Agr safe h to queen ko rkh do
         board[row][col]='Q';

         //Recursion dekh lega
         solve(board , col+1, n ,ans );

         //Backtracking
          board[row][col]='.';
      }
   }
}
    vector<vector<string>> solveNQueens(int n){
   
   vector<vector<char>> board(n, vector<char>(n ,'.'));
   //0->empty cell
   //1->queen placed
   vector<vector<string>> ans;

   int col =0; // Q1 will be placed at col 1

   solve(board, 0,n,ans);

   return ans;
     }
        
    
};