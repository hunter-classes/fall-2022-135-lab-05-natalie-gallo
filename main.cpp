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
  //UPDATE: IMPLEMENTED as well as negatives
  result = isPrime(1);
  if (result == true) {
    std::cout << "Yes \n";
  } else {
    std::cout << "No \n";
  }
  //task c
  int output;
  output = nextPrime(14);
  std::cout << "nextPrime(14) == " << output << std::endl;
  //task d
  output = countPrimes(7, 19);
  std::cout << "There are " << output << " prime numbers within range. \n";
  //task e
  result = isTwinPrime(17);
  if (result == true) {
    std::cout << "Yes \n";
  } else {
    std::cout << "No \n";
  }
  //task f
  output = nextTwinPrime(2);
  std::cout << "nextTwinPrime(2) == " << output << std::endl;
  //task g
  output = largestTwinPrime(5, 18);
  std::cout << "largestTwinPrime(5, 18) == " << output << std::endl;
  
  return 0;
}
