// This program is a basic Magic 8-Ball simulator.
// It generates a random number and outputs a response based on the number.

#include <iostream>
#include <cstdlib>

int main(){
  // Initialize 8-Ball
  std::cout << "MAGIC 8-BALL:\n\n";

  // Get a new random number each time
  srand(time(NULL)); // Sets seed of random number gen

  // Prompt for random number
  int answer = std::rand() % 10;

  // Conditional logic and output
  if (answer == 0) {
    std::cout << "It is certain.\n";
  } else if (answer == 1) {
    std::cout << "Don't count on it.\n";
  } else if (answer == 2) {
    std::cout << "Reply hazy, try again.\n";
  } else if (answer == 3) {
    std::cout << "Yes - definitely.\n";
  } else if (answer == 4) {
    std::cout << "As I see it, yes.\n";
  } else if (answer == 5) {
    std::cout << "Most likely.\n";
  } else if (answer == 6) {
    std::cout << "Outlook good.\n";
  } else if (answer == 7) {
    std::cout << "My sources say no.\n";
  } else if (answer == 8) {
    std::cout << "Cannot predict now.\n";
  } else if (answer == 9) {
    std::cout << "Concentrate and ask again.\n";
  } else {
    std::cout << "Very doubtful.\n";
  }

}
