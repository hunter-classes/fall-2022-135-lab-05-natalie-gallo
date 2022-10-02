#include <iostream>


#include "funcs.h"

int main()
{
  bool result;
  result = isDivisibleBy(35, 17);
  if (result == 1) {
    std::cout << "Yes \n";
  } else {
    std::cout << "No \n";
  }
  return 0;
}
