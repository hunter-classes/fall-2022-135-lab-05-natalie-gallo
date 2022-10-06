#include <iostream>
#include "funcs.h"

// add functions here
//CLEANED!

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
  if (n <= 1){
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
  int nextn = n + 1;
  while (isPrime(nextn) != true){
    nextn = nextn + 1;
  }
  return nextn;
}

//TASK D

int countPrimes(int a, int b){
  int counter = 0;
  for (int i = b; i >= a; i--){
    if (isPrime(i) == true){
      counter = counter + 1;
    }
  }
  return counter;
}

//TASK E

bool isTwinPrime(int n){
  if (isPrime(n)){
    if(isPrime(n + 2) == true || isPrime(n - 2) == true){
      return true;
    }
  }
  return false;
}

//TASK F

int nextTwinPrime(int n){
  int nextn = n + 1;
  while (isTwinPrime(nextn) != true){
    nextn = nextn + 1;
  }
  return nextn;
}
    
//TASK G
    
int largestTwinPrime(int a, int b){
  for (int i = b; i >= a; i--){
    if (isTwinPrime(i) == true){
      return i;
    }
  }
  return -1;
} 
