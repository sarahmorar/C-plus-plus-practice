// Context: Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.
// This program asks him what his earth weight is, the number for the planet he wants to fight on, and computes his weight on that planet.

#include <iostream>

int main() {
  
  // Declare variables
  double weight;
  int x;

  // Ask for earth weight:
  std::cout << "Enter current weight on Earth: ";
  std::cin >> weight;

  // Display planet menu
  std::cout << "Where are you heading this time?\n";
  std::cout << "1. Mercury   2.Venus   3.Mars\n";
  std::cout << "4. Jupiter   5.Saturn   6.Uranus\n";
  std::cout << "7. Neptune\n";
  std::cin >> x;
  
  // Calculating weights
  switch (x) {
  case 1 :
    std::cout << "You are visiting MERCURY.\n";
    weight = weight*0.38;
    break;
  case 2 :
    std::cout << "You are visiting VENUS.\n";
    weight = weight*0.91;
    break;
  case 3 :
    std::cout << "You are visiting MARS.\n";
    weight = weight*0.38;
    break;
  case 4 :
    std::cout << "You are visiting JUPITER.\n";
    weight = weight*2.34;
    break;
  case 5 :
    std::cout << "You are visiting SATURN.\n";
    weight = weight*1.06;
    break;
  case 6 :
    std::cout << "You are visiting URANUS.\n";
    weight = weight*0.92;
    break;
  case 7 :
    std::cout << "You are visiting NEPTUNE.\n";
    weight = weight*1.19;
    break;
}

std::cout << "Your weight: " << weight <<" lbs.\n";

}
