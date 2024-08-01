#include <cspice/SpiceUsr.h>
#include <cspice/version.h>

#include <cxxopts.hpp>
#include <iostream>
#include <string>
#include <unordered_map>

auto main(int argc, char** argv) -> int {
  ConstSpiceChar* versn;
  versn = tkvrsn_c("TOOLKIT");
  std::cout << "SPICE Toolkit version: " << versn << std::endl;
  return 0;
}
