#include <iostream>


#include "funcs.h"

int main()
{
  // task a
  bool result;
  result = isDivisibleBy(100, 25);
  if (result == true) {
    std::cout << "Yes \n";
  } else {
    std::cout << "No \n";
  }
  // task b
  //NOTE: 1 is NOT a prime number (need to implement this)
  result = isPrime(1);
  if (result == true) {
    std::cout << "Yes \n";
  } else {
    std::cout << "No \n";
  }
  return 0;
}
