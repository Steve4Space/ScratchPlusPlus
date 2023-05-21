#include <iostream>

#define SPLUSPLUS_VERSION "0.1.0"

namespace internal {
void info() { std::cout << "Version: " << SPLUSPLUS_VERSION; }

void help() {
  std::cout << "Scratch++\nThe C++ compiler for scratch projects\n";
  std::cout << "Usage: [program] [command]\n";
} // namespace internal
}