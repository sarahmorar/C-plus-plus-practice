// This program works like the Hogwarts sorting hat.
// The user responds to question prompts with a number. The number is assigned to different houses.
// Each question response adds a point to the respective house. 
// The program outputs the final answer (gryffindor, slytherin, ravenclaw, hufflepuff) at the end.

#include <iostream>
#include <string>

int main() {
  // Declare variables (gryffindor, hufflepuff, ravenclaw, slytherin) and initialize
  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
  int answer1, answer2, answer3, answer4;

  // Output quiz title
  std::cout << "The Sorting Hat Quiz!\n\n";

  // Questions
    // Output Question 1
    std::cout << "When I'm dead, I want people to remember me as: \n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n";

    // Prompt user response
    std::cin >> answer1;

    // Add point to house
    if (answer1 == 1) {
      hufflepuff++;
    } else if (answer1 == 2) {
      slytherin++;
    } else if (answer1 == 3) {
      ravenclaw++;
    } else if (answer1 == 4){
      gryffindor++;
    } else {
      std::cout << "Invalid input\n";
    }

    // Output Question 2
    std::cout << "Q2) Dawn or Dusk?\n";
    std::cout << "1) Dawn\n";
    std::cout << "2) Dusk\n";

    // Prompt user response
    std::cin >> answer2;

    // Add point to house
    if (answer2 == 1) {
      gryffindor++;
      ravenclaw++;
    } else if (answer2 == 2) {
      hufflepuff++;
      slytherin++;
    } else {
      std::cout << "Invalid input\n";
    }

    // Output Question 3
    std::cout << "Q2) Which kind of instrument most pleases your ear?\n";
    std::cout << "1) The violin\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n";

    // Prompt user response
    std::cin >> answer3;

    // Add point to house
    if (answer3 == 1) {
      slytherin++;
    } else if (answer3 == 2) {
      hufflepuff++;
    } else if (answer3 == 3) {
      ravenclaw++;
    } else if (answer3 == 4) {
      gryffindor++;
    } else {
      std::cout << "Invalid input\n";
    }

   // Output Question 3
    std::cout << "Q3) Which road tempts you most?\n";
    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-strewn path through woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";

    // Prompt user response
    std::cin >> answer4;

    // Add point to house
    if (answer4 == 1) {
      hufflepuff++;
    } else if (answer4 == 2) {
      slytherin++;
    } else if (answer4 == 3) {
      gryffindor++;
    } else if (answer4 == 4) {
      ravenclaw++;
    } else {
      std::cout << "Invalid input\n";
    } 

  // Calculate answer
    // Variables
    int max = 0;
    std::string house;

    if (gryffindor > max) {
      max = gryffindor;
      house = "Gryffindor";
    }
    if (hufflepuff > max) {
      max = hufflepuff;
      house = "Hufflepuff";
    }
    if (ravenclaw > max) {
      max = ravenclaw;
      house = "Ravenclaw";
    }
    if (slytherin > max) {
      max = slytherin;
      house = "Slytherin";
    }
  
  // Output answer
  std::cout << "You are a " << house << "!\n";

}
