#include "mycpp/Dummy.h"
#include <catch2/catch.hpp>

TEST_CASE("Factorials are computed", "[factorial]") {
  mycpp::Dummy dum;
  REQUIRE(dum.factorial(5) == 120);
  REQUIRE(dum.factorial(0) == 1);
}
