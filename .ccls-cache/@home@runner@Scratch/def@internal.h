#include <iostream>

#define SPLUSPLUS_VERSION "0.1.0"

namespace internal {
void info() {
  std::cout << "Scratch++ - Scratch to C++ compiler\n"
            << "Version: " << SPLUSPLUS_VERSION << "\n"
            << "This binary was compiled on " << __DATE__ << "\n";
}

void help() {
  std::cout << "Scratch++ - Scratch to C++ compiler\n\n"
            << "Usage: scratch++ [commands], scratch++ [file]\n\n"
            << "Options:\n"
            << "\t--info - Show info about the program\n"
            << "\t--help - Show this message\n";
}
} // namespace internal