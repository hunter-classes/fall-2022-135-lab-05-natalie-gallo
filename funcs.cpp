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
    if (i == 1){
      prime = false;
    }
    if (i == 2){
      prime = true;
    }
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

//TASK D

int countPrimes(int a, int b){

  bool prime;
  int counter = 0;

  for (int i = a; i <= b; i++){
    if (i == 1){
      prime = false;
    }
    if (i == 2){
      prime = true;
    }
    for (int j = i - 1; j > 1; j--) {
      if (i % j == 0) {
	prime = false;
	break;
      } else if (i % j != 0) {
	prime = true;
      }
    }
    if (prime == true){
      counter = counter + 1;
    }
  }
  return counter;
}

//TASK E

bool isTwinPrime(int n){
  int upper_prime = n + 2;
  int lower_prime = n - 2;

  bool prime;

  for (int j = upper_prime - 1; j > 1; j--){
    if (upper_prime % j == 0) {
      prime = false;
      break;
    } else if (upper_prime % j != 0) {
      prime = true;
    }
  }

  if (prime != true){
    for (int j = lower_prime - 1; j > 1; j--){
      if (lower_prime % j == 0) {
	prime = false;
	break;
      } else if (lower_prime % j != 0) {
	prime = true;
      }
    }
  }

  return prime;
}

//TASK F

int nextTwinPrime(int n){
  int prime_num;
  
  bool prime;
  bool twin_prime;
  
  if (twin_prime != true){
    
    for (int i = n + 1; i > n; i++){
      if (i == 1){
	prime = false;
      }
      if (i == 2){
	prime = true;
      }
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

	int upper_prime = prime_num + 2;
	int lower_prime = prime_num - 2;

	int twin;
       
	for (int j = upper_prime - 1; j > 1; j--){
	  if (upper_prime % j == 0) {
	    twin_prime = false;
	    break;
	  } else if (upper_prime % j != 0) {
	    twin_prime = true;
	  }
	}
	if (twin_prime == true){
	  twin = prime_num;
	  twin_prime = true;
	}

	if (twin_prime != true){
	  for (int j = lower_prime - 1; j > 1; j--){
	    if (lower_prime % j == 0) {
	      twin_prime = false;
	      break;
	    } else if (lower_prime % j != 0) {
	      twin_prime = true;
	    }
	  }
	  if (twin_prime == true){
	    twin = prime_num;
	    twin_prime = true;
	    break;
	  }
	}
	prime = false;
      }
    }
  }
  return prime_num;
}
    

    
  
  
    
  
