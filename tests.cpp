#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

//task a tests
TEST_CASE("n isDivisibleBy d Case") {
  CHECK(isDivisibleBy(100, 25) == true);
  CHECK(isDivisibleBy(35, 17) == false);
  CHECK(isDivisibleBy(48, 11) == false);
}

//task b tests
TEST_CASE("n isPrime Case") {
  CHECK(isPrime(1) == false);
  CHECK(isPrime(5) == true);
  CHECK(isPrime(6) == false);
  CHECK(isPrime(23) == true);
}

//task c tests
TEST_CASE("nextPrime after n Case") {
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(17) == 19);
  CHECK(nextPrime(23) == 29);
}

//task d tests
TEST_CASE("countPrimes in range Case") {
  CHECK(countPrimes(7, 19) == 5);
  CHECK(countPrimes(5, 23) == 7);
  CHECK(countPrimes(3, 23) == 8);
}

//task e test
TEST_CASE("n isTwinPrime Case") {
  CHECK(isTwinPrime(17) == true);
  CHECK(isTwinPrime(53) == false);
  CHECK(isTwinPrime(47) == false);
}

//task f test

TEST_CASE("nextTwinPrime after n Case") {
  CHECK(nextTwinPrime(1) == 3);
  CHECK(nextTwinPrime(3) == 5);
  CHECK(nextTwinPrime(13) == 17);
}

//task g test
TEST_CASE("largestTwinPrime in range Case") {
  CHECK(largestTwinPrime(5, 18) == 17);
  CHECK(largestTwinPrime(1, 31) == 31);
  CHECK(largestTwinPrime(14, 16) == -1);
}
