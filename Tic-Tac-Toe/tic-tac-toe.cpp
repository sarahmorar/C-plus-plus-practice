/* TIC-TAC-TOE
You know it. The classic game. 
Does not include any AI or strategy */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Load functions
void displayBoard(const std::vector<char>& board);
int getPlayerMove();
int getComputerMove(const std::vector<char>& board);
bool isValidMove(const std::vector<char>& board, int position);
bool checkWinner(const std::vector<char>& board, char player);
bool checkTie(const std::vector<char>& board);

int main(){
    std::srand(std::time(0)); // Seed the random number generator

    // Initialize the board and current player
    std::vector<char> board = {
        '1', '2', '3',
        '4', '5', '6',
        '7', '8', '9'
    };
    char currentPlayer = 'X';

    // Game loop
    while (true) {
        displayBoard(board);
        
        // Player turn
        int move;
        while (!isValidMove(board, move = (currentPlayer == 'X' ? getPlayerMove() : getComputerMove(board)))) {
            std::cout << "Invalid move. Try again.\n";
            move = getPlayerMove();
        }
        
        // Update board with player move
        board[move - 1] = 'X';

        // Check for player win
        if (checkWinner(board, 'X')){
            displayBoard(board);
            std::cout << "You win!\n";
            break;
        }

        // Check for tie
        if (checkTie(board)){
            displayBoard(board);
            std::cout << "It's a tie!\n";
            break;
        }

        // Computer turn
        int computerMove = getComputerMove(board);  
        board[computerMove] = 'O';

        std::cout << "Computer chose position " << computerMove + 1 << ".\n";
        
        // Check for computer win
        if (checkWinner(board, 'O')){
            displayBoard(board);
            std::cout << "Computer wins!\n";
            break;
        }

        // Check for tie
        if (checkTie(board)){
            displayBoard(board);
            std::cout << "It's a tie!\n";
            break;
        }
    }
    return 0;
}

// Functions
void displayBoard(const std::vector<char>& board){ // Display the current state of the board
    for (int i = 0; i < board.size(); i++){
        std::cout << board[i];
        if ((i + 1) % 3 == 0){
            std::cout << "\n";
            if (i != 8){
                std::cout << "---------\n";
            }
        }
        else {
            std::cout << " | ";
        }
    }
    std::cout << "\n";
}

int getPlayerMove(){ // Get the player's move
    int position;

    std::cout << "Choose a position (1-9): ";
    std::cin >> position;

    return position;
}

int getComputerMove(const std::vector<char>& board){ // Get the computer's move
    
    int computerMove;
    do {
        computerMove = std::rand() % 9; // Randomly select a position from 0 to 8
    } while (board[computerMove] == 'X' || board[computerMove] == 'O'); // Repeat if the position is already taken
    return computerMove;
}

bool isValidMove(const std::vector<char>& board, int position){ // Check if the move is valid
    if (position < 1 || position > 9){
        return false;
    }

    if (board[position -1] == 'X' || board[position -1] == 'O'){
        return false;
    }

    return true;
}

bool checkWinner(const std::vector<char>& board, char player){ // Check if the player has won
    std::vector<std::vector<int>> winningCombos = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}
    };
    for (int i = 0; i < winningCombos.size(); i++){
        int a = winningCombos[i][0];
        int b = winningCombos[i][1];
        int c = winningCombos[i][2];

        if (board[a] == player &&
            board[b] == player &&
            board[c] == player){
            
            return true;
        }
    }
    return false;
}

bool checkTie(const std::vector<char>& board){ // Check if the game is a tie
    for (int i = 0; i < board.size(); i++){
        if (board[i] != 'X' && board[i] != 'O'){
            return false;
        }
    }
    return true;
}
