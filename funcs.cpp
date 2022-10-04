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
  if (n == 1){       //would this be a test case?
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

//TASK C

int nextPrime(int n){

  int prime_num;
  
  bool prime;

  for (int i = n + 1; i > n; i++){
    for (int j = i - 1; j > 1; j--) {
      if (i % j == 0){
	prime = false;
	break;
      } else if (i % j != 0){
	prime = true;
      }
    }
    if (prime == true){
      prime_num = i;
      break;
    }
  }
  return prime_num;
}

