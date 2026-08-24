// This program converts three types of foreign currencies to USD.

#include <iostream>

int main() {
  
// Declare currency variables
double pesos, reais, soles, dollars;

// Ask user input currency amount
std::cout << "Enter number of Colombian Pesos: ";
std::cin >> pesos;
std::cout << "Enter number of Brazilian Reais: ";
std::cin >> reais;
std::cout << "Enter number of Peruvian Soles: ";
std::cin >> soles;

// Conversion to USD
dollars = (0.00032*pesos) + (0.27*reais) + (0.3*soles);

// Final output to USD
std::cout << "US Dollars = $" << dollars << "\n";

}
