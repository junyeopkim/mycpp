#include <iostream>
#include "mycpp/Dummy.h"

int main()
{
  mycpp::Dummy dumm;
  std::cout << dumm.factorial(5) << '\n';

  return 0;
}
