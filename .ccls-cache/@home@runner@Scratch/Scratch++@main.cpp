#include "cli_defs.hpp"
#include <string>
#include <cstring>
#include <filesystem>
#include <iostream>

int main(int argc, char *argv[]) {
	// If we have less than two command line arguments, 
	// exit the program and show the help message.
	if (argc < 2) {
		cli::help();
		std::exit(0);
	}
	
	if ((strcmp(argv[1], "--compile") == 0) && std::filesystem::exists(argv[2])) {
		std::cout << "Compiling " << argv[2] << "\n";
	} else if (strcmp(argv[1], "--info") == 0) {
		cli::info();
	} else if (strcmp(argv[1], "--help") == 0) {
		cli::help();
	} else {
		std::cout << "\033[31mInvalid input!\n\033[0m";
		cli::help();
	}
	
  return 0;
}