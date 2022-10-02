#include <iostream>
#include "funcs.h"

// add functions here

//TASK A

bool isDivisibleBy(int n, int d){
  if (n % d == 0){
    return true;
  }
  else {
    return false;
  }
}

//TASK B
bool isPrime(int n) {
  bool prime;
  if (n == 1){
    prime = false;
    return prime;
  }
  for (int i = n - 1; i > 1; i--) {
    if (n % i == 0) {
      prime = false;
      break;
    } else if (n % i != 0) {
      prime = true;
    }
  }
  return prime;
}

