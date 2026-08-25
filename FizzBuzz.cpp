/* Let's give Fizz Buzz a crack.
This program outputs numbers 1-100, but for multiples of 3, it prints Fixx instead of the numbers, and for multiples of 5, 
it prints Buzz. For numbers that are multiples of both 3 and 5, print, FizzBuzz. */

// Libraries
#include <iostream>

int main(){
  for (int i = 1; i <= 100; i++) {

    // Check if divisible
    if (i % 15 == 0) {
        std::cout << "FizzBuzz\n";
    } else if (i % 5 == 0){
      std::cout << "Buzz\n";
    } else if (i % 3 == 0) {
      std::cout << "Fizz\n";
    } else {
      std::cout << i << "\n";
    }
  }
}
