#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool isValidSudoku(vector<vector<char>> &board) {
  unordered_map<int, unordered_set<char>> columns;
  unordered_map<int, unordered_set<char>> rows;
  unordered_map<int, unordered_set<char>> boxes;

  for (int i = 0; 9 > i; i++) {
    for (int j = 0; 9 > j; j++) {
      char currentNum = board[i][j];
      if (currentNum == '.')
        continue;
      if (columns[j].contains(currentNum) || rows[i].contains(currentNum) ||
          boxes[(i / 3) * 3 + (j / 3)].contains(currentNum))
        return false;
      columns[j].insert(currentNum);
      rows[i].insert(currentNum);
      boxes[(i / 3) * 3 + (j / 3)].insert(currentNum);
    }
  }
  return true;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  vector<vector<char>> board = {{'1', '2', '.', '.', '3', '.', '.', '.', '.'},
                                {'4', '.', '.', '5', '.', '.', '.', '.', '.'},
                                {'.', '9', '8', '.', '.', '.', '.', '.', '3'},
                                {'5', '.', '.', '.', '6', '.', '.', '.', '4'},
                                {'.', '.', '.', '8', '.', '3', '.', '.', '5'},
                                {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                {'.', '.', '.', '.', '.', '.', '2', '.', '.'},
                                {'.', '.', '.', '4', '1', '9', '.', '.', '8'},
                                {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
  cout << boolalpha << isValidSudoku(board);
  return 1;
}
