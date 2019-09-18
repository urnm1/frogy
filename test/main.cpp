#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

TEST_CASE("a test case", "[tag]") {
  REQUIRE(1==1);
}
