/* 
Rock Paper Scissors 
This program prompts the user to select either Rock, Paper, or Scissors.
The computer randomly selects Rock, Paper, or Scissors.
The program compares the user's choice and the computer's choice and determines the winner.
The program outputs the result. */

// Libraries
#include <iostream>
#include <stdlib.h>

int main() {
  srand(time(NULL));

  // Initialize
  int computer = rand() % 3 + 1;
  int user = 0;

  // Output start
  std::cout << "Rock, paper, scissors!\n\n";
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "Shoot! ";

  // Prompt user for input
  std::cin >> user;

  // Logic
  if (user == computer) {
    std::cout << "It's a tie!\n";
  } else if (user == 1 && computer == 3) {
    std::cout << "You win!\n";
  } else if (user == 2 && computer == 1) {
    std::cout << "You win!\n";
  } else if (user == 3 && computer == 2) {
    std::cout << "You win!\n";
  } else {
    std::cout << "Computer wins! You lose!\n";
  }

  return 0;
}
