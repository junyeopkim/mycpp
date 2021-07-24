#include "mycpp/Dummy.h"

namespace mycpp {

int Dummy::factorial(int n) {
  return n > 1 ? n*factorial(n-1) : 1;
}

}
