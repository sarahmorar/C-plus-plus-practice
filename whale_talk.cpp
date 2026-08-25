/* Whale Talk
This program takes a phrase and translates it into its whale talk equivalent.
Rules: 
  1] There are no consonants; only vowels, excluding y.
  2] U's and e's are extra long, so they must be doubled. */

// Load libraries
#include <iostream>
#include <vector>

int main(){

  // Initialize vectors
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'}; // Vector containing vowels
  std::string user_in; // Accepts and stores user input as a string
  std::vector<char> result; // Vector created for the result

  // Prompt user for input
  std::cout << "Whale, whale, whale. What have we here?\n\n";
  std::cout << "Enter your phrase . . .\n";

  std::getline(std::cin, user_in);

  // Check for vowels
  for (int i = 0; i < user_in.size(); i++){ // For every index in user,
    for (int j = 0; j < vowels.size(); j++){ // Check if the letter matches the vowels
      if (user_in[i] == vowels[j]){ // If user input matches vowel
        result.push_back(user_in[i]); // Add that vowel to the end of the user input
      }
    }
    if (user_in[i] == 'u' || user_in[i] == 'e'){ // If the vowel in user input is u or e,
      result.push_back(user_in[i]); // Double it
    }
  }

  for (int k = 0; k < result.size(); k++){ 
    std::cout << result[k]; // Output the result
  }
  std::cout << "\n";
}
