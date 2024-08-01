#include <cspice/SpiceUsr.h>
#include <cspice/version.h>
#include <doctest/doctest.h>

#include <string>

TEST_CASE("cspice") {
  ConstSpiceChar* versn;
  versn = tkvrsn_c("TOOLKIT");
  CHECK(std::string(versn) == std::string("CSPICE_N0067"));
}

TEST_CASE("cspice version") { CHECK(std::string(CSPICE_VERSION) == std::string("1.0")); }
