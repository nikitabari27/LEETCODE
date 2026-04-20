class Solution {
public:

void storeSoln(vector<vector<char>> &board,  vector<vector<string>> &ans, int n ){

    vector<string> temp;

    for(int row=0; row<n; row++){

        string output;

        for(int col=0; col<n; col++){


                output.push_back(board[row][col]);
            
         }
           temp.push_back(output);
    }
    ans.push_back(temp);
}

bool isSafe( vector<vector<char>> &board, int row, int col ,int n){

    int r=row;
    int c=col;
    // left row
    while(c >= 0){

        if(board[r][c]=='Q'){
            return false;
        }
        c--;
 }
 // upper left diagonal
     r= row;
    c =col;
    while(r>=0 && c>=0){

        if(board[r][c]=='Q'){
            return false;
        }
        r--;
        c--;
   }
   //Bottom left diagonal
    r= row;
    c= col;
   while(r < n && c >=0){

        if(board[r][c]=='Q'){
            return false;
        }
        r++;
        c--;
   }
   return true;
}

void solve( vector<vector<char>> &board , int col, int n, vector<vector<string>> &ans){

    //Base case
    if(col >=n){
        storeSoln(board, ans, n);
        return ;
    }

    for(int row=0; row<n; row++){
        if(isSafe(board, row, col, n)){

            board[row][col]='Q';
            
        
        solve(board , col+1, n, ans);

        board[row][col]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {

        vector<vector<char>> board(n, vector<char>(n, '.') );

        int col=0;

        vector<vector<string>> ans;

        solve(board, 0, n,ans);

       return ans; 
    }
};