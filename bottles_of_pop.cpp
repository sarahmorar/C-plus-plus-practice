// Hope you like pop.

// Starting from the 99 bottles of pop, each loop decreases our pop until we get to 0. 

#include <iostream>

int main() {

  // For each bottle of pop we pass around, the next loop will have one less. This repeats until we get to 0. No more pop :(
  for (int i = 99; i > 0; i--) {
    std::cout << i << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
    std::cout << i - 1 << " bottles of pop on the wall.\n\n";
  }
  
}
