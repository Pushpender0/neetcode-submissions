class Solution {
public:
  bool check(int row, int col, vector<vector<char>> &borad, int val)
{
    // row check
    for (int j = 0; j < 9; j++)
    {
        if (borad[row][j] - '0' == val && j != col)
            return false;
    }
    // col check
    for (int i = 0; i < 9; i++)
    {
        if (borad[i][col] - '0' == val && i != row)
            return false;
    }
    // inner square
    int st_row = (row / 3) * 3;
    int st_col = (col / 3) * 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int iN = st_row + i;//new i 
            int jN = st_col + j;//new j
            if (borad[iN][jN] - '0' == val && (iN != row || jN != col))
                return false;
        }
    }
    return true;
}

bool isValidSudoku(vector<vector<char>> &board)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int val = board[i][j] - '0';
            if (board[i][j] != '.')
            {
                if (check(i, j, board, val) == false)
                    return false;
            }
        }
    }
    return true;
}
};
